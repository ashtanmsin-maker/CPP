#include<iostream>
#include<cmath>
using namespace std;

int digits(int n,int dig){
    if (n/10==0){return dig;};
    return digits(n/10,++dig);
}

int pall(int n,int digi,int digit){
    if (digi==0){cout<<"It is a pallindrome\n";return ;};
    if (n/pow(10,(digi-1))!=(n%(pow(10,(digit-digi+1))))){cout<<"Not a pallindrome";};
    return pall (n,digi-1,digit);
}

int main (){
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    int x=digits(a,1);
    pall(a,x,x);
    return pall(a,x,x);;
}