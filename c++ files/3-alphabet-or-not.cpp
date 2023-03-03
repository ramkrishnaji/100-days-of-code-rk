#include<iostream>
#include <cctype>
using namespace std;

int main()
{


    char str;
    cout<<"Enter a value to check its type :"<<endl;
    cin>>str;
    
    
    if(isalpha(str)){
        cout<<"alphabet"<<endl;
    }   
    else{
        cout<<"not an alphabet"<<endl;
    }

    return 0;
}