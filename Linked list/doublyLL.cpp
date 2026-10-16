#include <iostream>
using namespace std;
class Node{
public:
    int val; 
    Node*next;
    Node*prev;
    Node(int val){
        this->val=val;
        next=prev=NULL;
    }
};
class MyDLL{
 
};
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void printRev(Node*tail){
    Node*temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
}
int main(){
 Node*a =new Node(10);
  Node*b =new Node(20);
  Node*c =new Node(30);
  Node*d =new Node(40);
  a->next=b;
  b->next=c;
  c->next=d;
  b->prev=a;
  c->prev=b;
  d->prev=c;
print(a);
cout<<endl;
printRev(d);
}
