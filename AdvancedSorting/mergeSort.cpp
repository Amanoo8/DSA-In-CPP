#include<vector>
#include<iostream>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &c){
    int m=a.size();
    int n=b.size();
    int i=0,j=0,k=0;
    while(i<m&&j<n){
        if(a[i]<b[j])c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
}
void print(vector<int> &a){
    int m=a.size();
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
}
void mergeSort(vector<int>&a){
    int m=a.size();
    if(m==1)return;
    vector<int> b(m/2);
    vector<int> c(m-m/2);
    for(int i=0;i<m;i++){
        if(i<m/2)b[i]=a[i];
        else c[i-(m/2)]=a[i];
    }
    mergeSort(b);
    mergeSort(c);
    merge(b,c,a);
    delete(&b);
    delete(&c);
}
int main(){
 vector<int> a={0,5,3,7,1,-2,9};
 mergeSort(a);
 print(a);
}