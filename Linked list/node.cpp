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
void print(node *a){
  if(a==NULL)return;
  print(a->next);
  cout<<a->val<<" ";
}
int main(){
  node*a = new node(1);
  node*b = new node(5);
  node*c = new node(6);
  node*d = new node(4);
  
  a->next=b;
  b->next=c;
  c->next=d;
  d->next=NULL;
//   node*x=a;
//   while(x!=NULL){
//    cout<<x->val<<" ";
//    x=x->next;
//   }
print(a);
}