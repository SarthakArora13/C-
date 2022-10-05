#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"\nEnter the 3 Numbers:-";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"A is greater";
    }
    if(b>a && b>c){
        cout<<"\nB is greater\n";
    }
    else{
        cout<<"C is greater";
    }
    return 0;
}