#include<iostream>
using namespace std;
int main(){
int n,i,sum=0;
cout<<"Enter the Range till the sum you want to print:-";
cin>>n;
for(i=1;i<=n;i++){
    sum=sum+i;
}
cout<<"Sum of Natural No. is:\n"<<sum;
return 0;
}