#include<iostream>
using namespace std;
int main (){
    int a=5;
    // ptr is a pointer variable that stores the address of a
    int* ptr;
    ptr =&a;
    // ptr and &a are same
    cout<<"Address of variable a:"<<ptr<<" = "<<&a<<endl;
    cout<<"Accessing the variable through ptr:"<<*ptr<<" = "<<a<<endl;
    cout<<"Address of pointer:"<<&ptr<<endl;
    return 0;
}