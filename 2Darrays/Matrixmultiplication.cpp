#include<iostream>
using namespace std;
int main(){
    int a,b,e,f,sum{0};
    cout<<"Enter the number of rows and columns of first matrix\n";
    cin>>a>>b;
    int c[a][b];
    cout<<"Enter the number of rows and columns of second matrix\n";
    cin>>e>>f;
    int d[e][f];
    int Q[a][f];
    cout<<"Input for first matrix\n";
    for (int i=0;i<a;i++){for(int j=0;j<b;j++){cin>>c[i][j];};};  
    cout<<"Input for second matrix\n";
    for (int i=0;i<e;i++){for(int j=0;j<f;j++){cin>>d[i][j];};};

    cout<<"Matrix multiplication is:\n";

    if(b!=e){cout<<"Invalid operation\n";}
    else {
        for(int i=0;i<a;i++){for(int l=0;l<f;l++){for(int k=0;k<e;k++){sum+=c[i][k]*d[k][l];};Q[i][l]=sum;sum=0;}}};
    
    for (int i=0;i<a;i++){for(int j=0;j<f;j++){cout<<Q[i][j]<<" ";};cout<<endl;};

    return 0;
}