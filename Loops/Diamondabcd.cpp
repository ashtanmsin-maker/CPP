#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for (int i=1;i<=(2*n);i++){for (int j=1;j<(2*n);j++){if(i<=n){if((j<=(n+i-1))&&(j>=(n-i+1))){if(j<=n){cout<<char(i+j-n+64);}else {cout<<char(i+n-j+64);}}
                                                        else {cout<<" ";}}else{if((j<=(3*n-i-1))&&(j>=(i+1-n))){if(j<=n){cout<<char(j+n-i+64);}else {cout<<char(3*n-i-j+64);}}
                                                        else {cout<<" ";}}};cout<<endl;}
    return 0;
}