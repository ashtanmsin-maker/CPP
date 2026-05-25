#include<iostream>
#include<cmath>
using namespace std;

void number(int n){
    if (n==1){cout<<1;return ;};
    number(n-1);
    cout<<n;
}

int main (){
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    number(a);
    return 0;
}