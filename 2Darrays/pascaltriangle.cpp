#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows\n";
    cin>>n;
    vector <vector<int>> v(n,vector<int>((2*n-1),0));
    for(int i=0;i<n;i++){for(int j=0;j<(2*n-1);j++){v[i][n-1-i]=1;
                                                    v[i][n-1+i]=1;
                                                    if((i>0)&&(j>0)&&(j<(2*n-2))){v[i][j]=v[i-1][j+1]+v[i-1][j-1];};}};
    for(int i=0;i<n;i++){for(int j=0;j<(2*n-1);j++){if(v[i][j]==0){cout<<"  ";} 
                                                    else {cout<<v[i][j]<<"  ";}};cout<<endl;};
    
    return 0;
}