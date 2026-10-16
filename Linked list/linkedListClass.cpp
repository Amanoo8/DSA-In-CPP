#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this-> val=val;
    }
};

class Myll{
    private:
    node* head;
    node* tail;
    int size;
    public:
    Myll(){
        head=tail=NULL;
        size=0;
    };
    void print(){
    node*x=head;
    while(x!=NULL){
    cout<<x->val<<" ";
    x=x->next;
  }
};
    void insertAtTail(int p){
    node* n=new node(p);
        if(size>0){
        tail->next=n;
        tail=n;
        tail->next=NULL;
        }else{
            n->next=NULL;
            head=tail=n;
            tail->next=NULL;
        }
        size++;
    }
 
    int length(){
    return size;
 }

   void insertAtHead(int p){
    node* n=new node(p);
    if(size==0){
        n->next=NULL;
        head=tail=n;
        tail->next=NULL;
    }else{
        n->next=head;
        head=n;
    }
    size++;
   }

   void deleteAtHead(){
    head=head->next;
    size--;
   }

  void addAtIndex(int i,int p){
    node*n=new node(p);
    if(i==0)insertAtHead(p);
    else if(i==size)insertAtTail(p);
    else{
        node*x=head;
        for(int k=1;k<i;k++){
            x=x->next;
        }
        n->next=x->next;
        x->next=n;
        size++;
    }

  }

  void deleteAtIndex(int i){
    if(i==0)deleteAtHead();
    else{
        node*x=head;
        for(int k=0;k<i-1;k++){
         x=x->next;
        }
        x->next=x->next->next;
        if(i==size-1)tail=x;
        size--;
    }
  }

  int get(int i){
    node*x=head;
    for(int k=0;k<i;k++){
        x=x->next;
    }
    cout<<x->val<<endl;
  }

};



int main(){
    Myll list;
    list.insertAtHead(1);
    list.insertAtTail(2);
    list.insertAtHead(4);
    list.insertAtTail(6);
    // list.deleteAtHead();
    list.addAtIndex(2,3);
    list.deleteAtIndex(1);
    list.print();
    cout<<endl;
    cout<<list.length()<<endl;
    list.get(2);
}