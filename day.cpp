#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int day;
    while(1){
    cout<<"\nEnter the Day";
    cin>>day;
    switch (day)
    {
    case 1:
    cout<<"Its Monday";
    break;
    case 2:
    cout<<"Its Tuesday";        
    break;
    case 3:
    cout<<"Its Wednesday";
    break;
    case 4:
    cout<<"Its Thursday";
    break;
    case 5:
    cout<<"Its Friday";
    break;
    case 6:
    cout<<"Its Saturday";
     break;
    case 7:
    cout<<"Its Sunday";
    break;
    case 0:
    exit;
    default:
    cout<<"Not Valid";
    exit(1);
    }
    }
    return 0;
}