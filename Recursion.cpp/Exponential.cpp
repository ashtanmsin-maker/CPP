#include<iostream>
using namespace std;
int power(int arr,int idx){
    if(idx==0){return arr;};
    if (q%2==0){int result = power(p,q/2);
                return (result*result);};
    int result2 = power(p,(q-1)/2);
    return (p*result2*result2);
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

