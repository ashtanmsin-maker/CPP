#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter marks"<<endl;
    cin>>a;
    if(a>33){if(a>80){cout<<"Passed gracefully";}
             else{cout<<"passed";};}
    else {cout<<"Fail";};  
    return 0;
}