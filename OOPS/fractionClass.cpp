#include <iostream>
using namespace std;
class Fraction{
public:
    int num;
    int deno;
    Fraction(int num,int deno){
    this->deno=deno;
    this->num=num;
    }
    void mul(Fraction f){
        cout<<num*f.num<<"/"<<deno*f.deno<<endl;
    }
    void div(Fraction f){
        cout<<num*f.deno<<"/"<<deno*f.num<<endl;
    }
    void add(Fraction f){
        cout<<(num*f.deno)+(deno*f.num)<<"/"<<deno*f.deno<<endl;
    }
    void subt(Fraction f){
        cout<<(num*f.deno)-(deno*f.num)<<"/"<<deno*f.deno<<endl;
    }
};
int main(){
 Fraction f1(2,5);
 Fraction f2(3,4);
 f1.mul(f2);
 f1.div(f2);
 f1.add(f2);
 f1.subt(f2);
}