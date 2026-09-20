#include<iostream>
using namespace std;
class MyVector{
private:
    int length;
    int* arr;
    int cap;
public:
    MyVector(int capacity,int default_value){
    length=cap=capacity;
    arr=new int[capacity];
    for(int i=0;i<length;i++){
        arr[i]=default_value;
    }
    }
    void print(){
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void pop(){
        if(length==0){
            cout<<"Vector is empty , You cann't pop"<<endl;
            return;
        }
        length--;
    }
    void push_back(int m){
        if(cap==length){
            cap=2*cap;
            int* temp =new int[cap];
            for(int i=0;i<length;i++){
                temp[i]=arr[i];
            }
            arr=temp;
        }
        arr[length++]=m;
    }
    int size(){
        return length;
    }
    int capacity(){
        return cap;
    }
    void get(int m){
     cout<<arr[m]<<endl;
    }
    void set(int m,int val){
     arr[m]=val;
    }
};
int main(){
  MyVector m1(5,-1);
  m1.print();
  cout<< m1.size()<<"  "<<m1.capacity()<<endl;
  m1.pop();
  m1.print();
 cout<< m1.size()<<"  "<<m1.capacity()<<endl;
  m1.push_back(5);
  m1.print();
 cout<< m1.size()<<"  "<<m1.capacity()<<endl;
 m1.push_back(9);
  m1.print();
 cout<< m1.size()<<"  "<<m1.capacity()<<endl;
 m1.get(5);
 m1.set(2,4);
 m1.print();
}