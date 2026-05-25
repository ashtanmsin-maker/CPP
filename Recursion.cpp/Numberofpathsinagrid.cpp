#include<iostream>
#include<cmath>
using namespace std;

int grid(int x,int y,int i,int j){
    if((i==x-1)&&(j==y-1)){return 1;};
    if((i<x)&&(j<y)){return grid(x,y,i+1,j)+grid(x,y,i,j+1);}
    return 0;
    
}

int main (){
    int a,b,x;
    cout<<"Enter the number of rows:\n";
    cin>>a;
    cout<<"Enter the number of columns:\n";
    cin>>b;
    cout<<"Output:\n";
    x=grid(a,b,0,0);
    cout<<x<<endl;
    return 0;
}