#include<iostream>
#include<cmath>
using namespace std;

int HCF(int x,int y){
    if (!(y%x)){return x;};
    return HCF(y%x,x);
}

int main (){
    int a,b,k;
    cout<<"Enter the numbers\n";
    cin>>a>>b;
    if(b<a){k=HCF(b,a);};
    if(b>=a){k=HCF(a,b);};
    cout<<"Output is:"<<k<<endl;
    return 0;
}