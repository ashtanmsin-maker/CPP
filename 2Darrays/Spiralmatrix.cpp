#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cout<<"Enter the order of matrix:\n";
    cin>>n;
    vector <vector<int>> v(n,vector<int>(n));
    int left{0},right{n-1},top{0},bottom{n-1},dir{0};
    cout<<"Enter the numbers\n";
    for(int i=0;i<n;i++){for(int j=0;j<n;j++){cin>>v[i][j];};};
    
    cout<<"Original matrix:\n";
    for (int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<v[i][j]<<" ";};cout<<endl;};

    cout<<"Spiral matrix:\n";
    for(;(left<=right)&&(top<=bottom);){
        if(dir==0){for(int j=left;j<=right;j++){cout<<v[top][j]<<"  ";};top++;};
        if(dir==1){for(int j=top;j<=bottom;j++){cout<<v[j][right]<<"  ";};right--;};
        if(dir==2){for(int j=right;j>=left;j--){cout<<v[bottom][j]<<"  ";};bottom--;};
        if(dir==3){for(int j=bottom;j>=top;j--){cout<<v[j][left]<<"  ";};left++;};
        dir=(dir+1)%4;
        };
        cout<<endl;
    return 0;
}
