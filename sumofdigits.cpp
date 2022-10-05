#include<iostream>
using namespace std;
int main(){
    int a,n,sum=0;
    cout<<"Enter the Number";
    cin>>n;
while(n>0)
{
a=n%10;
sum=sum+a;
n=n/10;
}
cout<<"Sum is:";
cout<<sum;
return 0;
}