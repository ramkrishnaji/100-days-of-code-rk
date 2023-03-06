#include<iostream>
using namespace std;
int main()
{   int a;
    cout<<"Enter a number to check if it is an +ve or -ve integer :"<<endl;
    cin>>a;
    if(a>0){
        cout<<"Positive number"<<endl;
    }
    else if(a<0){
        cout<<"Negative number"<<endl;
    }
    else{
        cout<<"Neither positive nor negative"<<endl;    }
    return 0;
}