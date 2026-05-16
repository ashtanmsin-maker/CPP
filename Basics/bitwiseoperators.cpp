#include<iostream>
using namespace std;
int main(){
    int a{16};
    cout<<(a>>2)<<endl<<(a<<2)<<endl<<(&a);
    //&a is address of a
    return 0;
}