#include<iostream>
using namespace std;
class M{
    protected:
    int m;
    public:
    void get_m(int);
};
class N
{
    protected:
    int n;
    public:
    void get_n(int);
};
class P:public M,public N{
public:
void display();
};
void M::get_m(int x){
    m=x;
}
void N::get_n(int y){
    n=y;
}
void P::display(){
    cout<<"M= "<<m<<"\n";
    cout<<"N= "<<n<<"\n";
    cout<<"M*N= "<<m*n<<"\n";
}
int main(){
    P ob;
    ob.get_m(10);
    ob.get_n(20);
    ob.display();
    return 0;
}