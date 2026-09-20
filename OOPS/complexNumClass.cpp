#include <iostream>
using namespace std;
class Complex{
public:
    int realp;
    int imgp;
    Complex(int realp,int imgp){
        this->imgp=imgp;
        this->realp=realp;
    }
    void print(){
        cout<<realp<<" + "<<imgp<<"i"<<endl;
    }
    void add(Complex c){
        cout<<realp+c.realp<<" + "<<imgp+c.imgp<<"i"<<endl;
    }
    void subt(Complex c){
        cout<<realp-c.realp<<" + "<<imgp-c.imgp<<"i"<<endl;
    }
    void mul(Complex c){
        cout<<(realp*c.realp)-(imgp*c.imgp)<<" + "<<(realp*c.imgp)+(imgp*c.realp)<<"i"<<endl;
    }
    void div(Complex c){
        cout<<"("<<(realp*c.realp)+(imgp*c.imgp)<<" + "<<-(realp*c.imgp)+(imgp*c.realp)<<"i"<<")"<<"/"<<"("<<(c.realp*c.realp)+(c.imgp*c.imgp)<<")"<<endl;
    }
};
int main(){
Complex c1(2,6);
Complex c2(3,4);
c1.print();
c2.print();
c1.add(c2);
c1.subt(c2);
c1.mul(c2);
c1.div(c2);
}
