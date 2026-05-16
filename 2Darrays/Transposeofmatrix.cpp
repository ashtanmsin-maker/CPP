#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows and columns of first matrix\n";
    cin>>a>>b;
    
    int c[a][b];
    int d[b][a];

    cout<<"Input for matrix\n";
    for (int i=0;i<a;i++){for(int j=0;j<b;j++){cin>>c[i][j];d[j][i]=c[i][j];};};
    cout<<"Original matrix:\n";
    for (int i=0;i<a;i++){for(int j=0;j<b;j++){cout<<c[i][j]<<" ";};cout<<endl;};
    cout<<"Transpose of matrix:\n";
    for (int i=0;i<b;i++){for(int j=0;j<a;j++){cout<<d[i][j]<<" ";};cout<<endl;};
    return 0;
}