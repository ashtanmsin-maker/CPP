#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for (int i=1;i<(n+1);i++){for (int j=1;j<(2*n);j++){if((j<=(n+i-1))&&(j>=(n-i+1))){if(j<=n){cout<<(i+j-n);}else {cout<<(i+n-j);}}
                                                        else {cout<<" ";}};cout<<endl;}
    return 0;
}