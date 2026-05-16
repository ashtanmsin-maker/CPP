#include<iostream>
using namespace std;
int main(){
    if(true||((5/0)==1)){cout<<"Yes";};
    //if(true|((5/0)==1)){cout<<"No";};   
    //Above line of code is source of error
    return 0;
}