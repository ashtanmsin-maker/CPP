#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){return 1;};
    return factorial(n-1)*n;;
}
int main (){
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    cout<<factorial(a);
    return 0;
}