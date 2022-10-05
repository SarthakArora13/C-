#include<iostream>
using namespace std;
int main(){
    int a[2][2],b[2][2],c[2][2],i,j;
    cout<<"Enter the Values for matrix 1:-";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the Values for matrix 2:-";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Matrix Multiplication is:\n";
    for(i=0;i<2;i++){
        cout<<"\n";
        for(j=0;j<2;j++){
            c[i][j]=a[i][j]*b[i][j];
            cout<<"\t"<<c[i][j];
        }
    }
     return 0;
}