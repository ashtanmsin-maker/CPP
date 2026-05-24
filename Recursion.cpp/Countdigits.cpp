#include<iostream>
using namespace std;
int digits(int n){
    if((n/10)==0){return n;};
    return (n%10+digits(n/10));
}
int main (){
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    cout<<digits(a)<<endl;
    return 0;
}
