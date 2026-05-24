//go from left to right
#include<iostream>
#include<string>
using namespace std;
int main (){
    int arr[2]={1,19};
    int *ptr = &arr[0];
    cout<<*ptr<<endl<<ptr<<endl;
    cout<<*ptr++<<endl;//Here 1 gets printed as first we return ptr then we add as it it post increment
                       //then we dereference
                       //also *ptr++=*(ptr++) not (*ptr)++
    cout<<*ptr<<endl<<ptr<<endl;
    
    return 0;
}
