#include<iostream>
using namespace std;
int main(){
    int a,n,i,count=1;
    cout<<"Enter the Number";
    cin>>n;
    a=n/2;
    for(i=2;i<=a;i++){
        if(n%i==0){
            cout<<"Input Number is Not prime";
            break;
        }
        else{
            count++;
        }
        
    }
    if(count==a){
        cout<<"It is a Prime Number";
    }
}