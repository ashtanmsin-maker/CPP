#include<iostream>
#include<cmath>
using namespace std;

void multiple(int num,int k){
    if (k<2){cout<<num<<endl;return ;};
    multiple(num,k-1);
    cout<<num*k<<endl;
}

int main (){
    int a,k;
    cout<<"Enter the number\n";
    cin>>a;
    cout<<"Enter the multiple\n";
    cin>>k;
    cout<<"Output is:\n";
    multiple(a,k);
    return 0;
}