#include <iostream>
#include <stack>
using namespace std;
void print(stack <int> &st){
    stack<int> helper;
    while(st.size()!=0){
        helper.push(st.top());
        st.pop();
    }
    while(helper.size()!=0){
        cout<<helper.top()<<" ";
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;
}
void pushAt(int index,int val,stack<int>&st){
    stack<int> helper;
    while(st.size()>index){
     helper.push(st.top());
     st.pop();
    }
    st.push(val);
    while(helper.size()!=0){
        st.push(helper.top());
        helper.pop();
    }
}
void popAt(int index,stack<int>&st){
    stack<int> helper;
    while(st.size()>index){
        helper.push(st.top());
        st.pop();
    }
    helper.pop();
    while(helper.size()!=0){
        st.push(helper.top());
        helper.pop();
    }
}
void get(int index,stack<int>&st){
    stack<int> helper;
    while(st.size()>index){
        helper.push(st.top());
        st.pop();
    }
    cout<<helper.top()<<endl;
    while(helper.size()!=0){
        st.push(helper.top());
        helper.pop();
    }
}
void reverseStack(stack<int> &st){
    stack<int> helper1;
    stack<int> helper2;
    while(st.size()!=0){
        helper1.push(st.top());
        st.pop();
    }
    while(helper1.size()!=0){
        helper2.push(helper1.top());
        helper1.pop();
    }
    while(helper2.size()!=0){
        st.push(helper2.top());
        helper2.pop();
    }
}
int main(){
 stack <int> st;
 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 print(st);
 pushAt(3,35,st);
 print(st);
 popAt(4,st);
 print(st);
 get(1,st);
 reverseStack(st);
 print(st);
}