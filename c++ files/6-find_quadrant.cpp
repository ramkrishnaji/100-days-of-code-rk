#include<iostream>
using namespace std;


int quadrant(int x ,int y){
    if(x>0 && y>0){
        cout<<"This point lies in first quadrant."<<endl;
    }
    else if(x<0 && y>0){
        cout<<"This point lies in second quadrant."<<endl;
    }
    else if(x<0 && y<0){
        cout<<"This point lies in third quadrant."<<endl;
    }
    else{
        cout<<"This point lies in fourth quadrant."<<endl;
    }
}
int main()
{   
    int x,y;
    cout<<"Enter the coordinates :"<<endl;
    cin>>x>>y;
    quadrant(x,y);
    return 0;
}