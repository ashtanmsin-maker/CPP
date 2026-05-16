#include<iostream>
using namespace std;
int main(){
    int a,i {0},sum {0};
    cout<<"Enter the number"<<endl;
    cin>>a;
    while (i<=a){sum+=i;i++;}
    cout<<sum;
    return 0;
}