#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows\n";
    cin>>a;
    cout<<"Enter the number of columns\n";
    cin>>b;
    int c[a][b];

    cout<<"Input\n";

    for (int i=0;i<a;i++){for(int j=0;j<b;j++){cin>>c[i][j];};};        

    cout<<"Output\n";

    for (int i=0;i<a;i++){for(int j=0;j<b;j++){cout<<c[i][j]<<" ";};cout<<endl;};

    return 0;
}