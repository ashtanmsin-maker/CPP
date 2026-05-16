#include<iostream>
using namespace std;
void prime(int a){
    int b{4};
    for (int i=2;i<a;i++){if((a%i)==0){b=3;break;};}
    if(b==4){cout<<a<<endl;};
}
int main(){
    int a,b;
    cout<<"Enter the two numbers"<<endl;
    cin>>a;
    cin>>b;
    for(int i=1;(a+i)<b;i++){prime(a+i);};
    return 0;
}