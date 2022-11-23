#include<iostream>
using namespace std;
class A{
int a;
public:
void get_a();
int print_a();
};
class B:public A
{
    int b,c;
    public: 
    int sum1;
    void sum();
    void print_sum();
};
class C:public B
{
int x,y;
public:
int product;
void prod(int,int);
void print_prod();
};
void A::get_a(){
    a=90;
}
int A::print_a(){
    cout<<"\n"<<"A = "<<a;
    return a;
}
void B::sum(){
    b=10;
    c=20;
    sum1=print_a();
    sum1=sum1+b+c;
}
void B::print_sum(){
    cout<<"\n"<<"Sum is.."<<sum1;
}
void C::prod(int p,int q){
    product=p*q;
}
void C::print_prod(){
    cout<<"\n"<<"Product is.."<<product;
}
int main(){
    C ob;
    ob.get_a();
    ob.print_a();
    ob.sum();
    ob.print_sum();
    ob.prod(9,5);
    ob.print_prod();
    return 0;
}