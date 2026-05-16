#include<iostream>
using namespace std;
int add(int a,int b=3,int c =4){
    return(a+b+c);
}
int main(){
    cout<<add(2)<<endl;
    //This is default
    cout<<add(2,6)<<endl;
    cout<<add(2,7,8)<<endl;
    return 0;
}