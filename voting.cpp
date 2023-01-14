#include<iostream>
using namespace std;
class voting{
int choice;
public:
int count1=0,count2=0,count3=0;
void vote(){
    cout<<"\n-----CANDIDATES ARE:-----\n";
    cout<<"1: BJP";
    cout<<"\n2: Congress";
    cout<<"\n3: Aam Aadmi Party";
    cout<<"\nEnter Choice(1,2 and 3)";
    cin>>choice;
    switch(choice){
        case 1:
        count1++;
        cout<<"\nSucessfully voted to BJP";
        break;
        case 2:
        count2++;
        cout<<"\nSucessfully voted to Congress";
        break;
        case 3:
        count3++;
        cout<<"\nSucessfully voted to Aam Aadmi Party";
        break;
        default:
        cout<<"\nWrong Choice, No vote has been counted";
        break;
    }

}
void vote_count(){
    cout<<"\n---VOTE COUNT---";
    cout<<"\n-----CANDIDATES ARE:-----\n";
    cout<<"1: BJP";
    cout<<"\n2: Congress";
    cout<<"\n3: Aam Aadmi Party";
    cout<<"\nEnter Choice(1,2 and 3)";
    cin>>choice; 
    switch(choice){
        case 1:
        cout<<"BJP votes are:"<<count1;
        break;
        case 2:
        cout<<"Congress votes are:"<<count2;
        break;
        case 3:
        cout<<"Aam Aadmi Party votes are:"<<count3;
        break;
    }
}
void winning(){
    cout<<"\nCurrently winning candidate is:";
    if(count1>count2 || count1>count3){
        cout<<"\nBJP is winning:"<<count1;
    }
    if(count2>count1 || count2>count3){
        cout<<"\nCongress is winning:"<<count2;
    }
    if(count3>count2 || count3>count1){
        cout<<"\nAam Aadmi Party is winning:"<<count3;
    }
}
};
int main(){
    voting v;
    int ch;
    while(ch!=4){
        cout<<"\n------Welcome to Voting System------";
        cout<<"\nEnter 1 to Cast Vote";
        cout<<"\nEnter 2 to Count Votes";
        cout<<"\nEnter 3 to Check winning Party";
        cout<<"\nEnter 4 to EXIT";
        cout<<"\nEnter Choice:";
        cin>>ch;
        switch(ch){
            case 1:
            v.vote();
            break;
            case 2:
            v.vote_count();
            break;
            case 3:
            v.winning();
            break;
            case 4:
            cout<<"Exiting.....";
            default:
            cout<<"Invalid";
            break;
        }
    }
    return 0;
}