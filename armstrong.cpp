#include<iostream>
using namespace std;
int main(){
    int a,n,temp,sum=0;
    cout<<"\nEnter the Number :";
    cin>>n;
    temp=n;
while(n>0)
{
a=n%10; //153 so 3
sum=sum+(a*a*a);
n=n/10;//153 so n will be 15
}
if (temp==sum){
cout<<"yes it is armstrong\n\n";
}
else{
cout<<"no\n";
}
return 0;
}