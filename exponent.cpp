#include<iostream>
using namespace std;
int main(){
    int n,p,i,mul=1;
    cout<<"\nEnter the Number";
    cin>>n;
    cout<<"\nEnter the Power";
    cin>>p;
    if(p==0){
        cout<<"1";
    }
    else{
    for(i=1;i<=p;i++){
        mul=mul*n;
    }
    cout<<"\n"<<mul;
    }

}