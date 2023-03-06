#include<iostream>
using namespace std;



int check(int a){

    if(a%2==0){
        cout<<"Even";
    }
    else if(a%2!=0){
        cout<<"odd";
    }
    else{
        cout<<"invalid input"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    check(n);
    return 0;
}

