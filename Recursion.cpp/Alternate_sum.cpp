#include<iostream>
#include<cmath>
using namespace std;

int alternate_sum(int n){
    if (n==1){return 1;};
    return(alternate_sum(n-1)+n*pow(-1,n+1));
}

int main (){
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    cout<<"Output is:"<<alternate_sum(a)<<endl;
    return 0;
}