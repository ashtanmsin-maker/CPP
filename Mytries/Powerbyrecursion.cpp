#include<iostream>
using namespace std;
int power(int p,int q){
    if(q==0){return 1;};
    return (p*power(p,q-1));
}
int main (){
    int a,b;
    cout<<"Enter the base:\n";
    cin>>a;
    cout<<"Enter the exponential:\n";
    cin>>b;
    cout<<power(a,b)<<endl;
    return 0;
}