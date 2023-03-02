#include<iostream>
using namespace std;
int main()
{
    string str;

    cout<<"Enter a value to check for vowel or consonant :"<<endl;
    cin>>str;
    for(int i=0;i<1;i++){
        if(isdigit(str[i]) ==true){
            cout<<"Invalid input"<<endl;
            break;
        }
        if(str=="a"){
            cout<<"Vowel"<<endl;
        }
        else if(str=="e"){
            cout<<"Vowel"<<endl;
        }
        else if(str=="i"){
            cout<<"Vowel"<<endl;
        }
        else if(str=="o"){
            cout<<"Vowel"<<endl;
        }
        else if(str=="u"){
            cout<<"Vowel"<<endl;
        }
        else{
            cout<<"Consonant"<<endl;
        }
    }
    return 0;
}