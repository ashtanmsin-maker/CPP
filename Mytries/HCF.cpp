#include<iostream>
#include<cmath>
using namespace std;

int HCF(int x,int y,int n){
    if (((x%n)==0)&&((y%n)==0)){return n;};
    return HCF(x,y,n-1);
}

int main (){
    int a,b,k;
    cout<<"Enter the numbers\n";
    cin>>a>>b;
    if(b<a){k=HCF(b,a,b);};
    if(b>=a){k=HCF(a,b,a);};
    cout<<"Output is:"<<k<<endl;
    return 0;
}