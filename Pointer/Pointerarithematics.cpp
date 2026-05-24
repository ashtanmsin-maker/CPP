#include<iostream>
#include<string>
using namespace std;
int main (){
    int a{5};
    int *ptr = &a;
    //initially ptr was 5
    cout<<*ptr<<endl<<ptr<<endl;
    ptr=ptr+1;
    //finally since addresses are being calculated
    //ptr=ptr+1=ptr+1xsizeof(datatype)
    cout<<*ptr<<endl<<ptr<<endl;
    
    return 0;
}