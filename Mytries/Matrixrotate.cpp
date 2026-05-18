#include<iostream>
#include<vector>
using namespace std;
void swap(int &x,int &y){
    x=x+y;
    y=x-y;
    x=x-y;
}
int main(){
    int n;
    cout<<"Enter the order of matrix\n";
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    cout<<"Enter the numbers\n";    
    for(int i=0;i<n;i++){for(int j=0;j<n;j++){cin>>v[i][j];};};
    
    cout<<"Original matrix:\n";
    for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<v[i][j]<<" ";};cout<<endl;};
 
    cout<<"Rotated matrix:\n";
    for(int i=0;i<(n/2);i++){for(int j=0;j<(n-1-2*i);j++){swap(v[i][j+i],v[n-1-j-i][i]);
                                                  swap(v[n-1-i-j][i],v[n-1-i][n-1-j-i]);
                                                  swap(v[n-1-i][n-1-j-i],v[j+i][n-1-i]);
                                                  }};

    for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<v[i][j]<<" ";};cout<<endl;};
                                             
    return 0;
}