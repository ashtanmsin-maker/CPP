#include<iostream>
#include<vector>
using namespace std;
int main (){
    int x,n,m,sum{0},a1,a2,b1,b2;
    cout<<"Enter the number of rows and columns\n";
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>x;sum+=x;v[i][j]=sum;};sum=0;};
    cout<<"Enter the posion to find sum for rectangle of:\n";
    cin>>a1>>b1>>a2>>b2;
    int &y=sum;
    for (int i=a1;i<=a2;i++){if(b1==0){y+=v[i][b2];}
                             else{y+=(v[i][b2]-v[i][b1-1]);};}
    
    cout<<"Sum is:"<<y<<endl;
    return 0;
}
