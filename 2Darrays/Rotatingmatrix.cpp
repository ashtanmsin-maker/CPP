#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the order of matrix:\n";
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));

    cout<<"Input for matrix\n";
    for (int i=0;i<n;i++){for(int j=0;j<n;j++){cin>>v[i][j];};};
    cout<<"Original matrix:\n";
    for (int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<v[i][j]<<" ";};cout<<endl;};

    for (int i=0;i<n;i++){for(int j=i;j<n;j++){temp=v[i][j];
                                               v[i][j]=v[j][i];
                                               v[j][i]=temp;}};
    
    for(int i=0;i<n;i++){reverse(v[i].begin(),v[i].end());};                                           
    cout<<"Rotated matrix:\n";
    
    for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<v[i][j]<<" ";};cout<<endl;};
    return 0;
}