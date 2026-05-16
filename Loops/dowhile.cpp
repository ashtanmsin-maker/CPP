#include<iostream>
using namespace std;
int main(){
    int i {0},sum {0}, n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    do {sum+=i;i++;}
    while (i<=n);
    cout<<sum;
    return 0;
}