#include<iostream>
using namespace std;
int main(){
    int a{3},b{7};
    cout<<"Initial postincrement:"<<a++<<endl;
    cout<<"Initial preincrement: "<<++b<<endl;
    cout<<"Final postincrement:  "<<a<<endl;
    cout<<"Final preincrement:   "<<b<<endl;

    return 0;
}