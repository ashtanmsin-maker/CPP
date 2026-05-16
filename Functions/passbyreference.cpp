#include<iostream>
using namespace std;
void change (int &a){
    a=100;
    cout<<a;
}
int main(){
    int b{5};
    change (b);
    cout<<b;
    return 0;
}