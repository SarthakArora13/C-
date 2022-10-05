#include<iostream>
using namespace std;
int main(){
int n,count=1,i;
cout<<"\nEnter the Number";
cin>>n;
for(i=1;i<=n;i++){
count=count*i;
}
cout<<"\nFactorial is\n";
cout<<count<<"\n";
return 0;
}


