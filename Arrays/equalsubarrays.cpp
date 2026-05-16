#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v;
    int n,ele,sum{0},diff{0};
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for (int i=0;i<n;i++){cin>>ele;v.push_back(ele);sum=sum+=v[i];};
    for (int i=0;i<n;i++){diff+=v[i];if(2*diff==sum){cout<<"The subarrays are:\n";for(int j=0;j<=i;j++){cout<<v[j]<<endl;};cout<<"And\n";for(int j=i+1;j<n;j++){cout<<v[j]<<endl;};}};                 
    return 0;
}