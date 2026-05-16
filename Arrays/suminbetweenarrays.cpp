#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v;
    int n,ele,sum{0},l,r;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for (int i=0;i<n;i++){cin>>ele;sum=sum+=ele;v.push_back(sum);};
    cout<<"Enter querries(start and end)\n";
    cin>>r;
    cin>>l;
    cout<<(v[l-1]-v[r-2])<<endl;

                         
    return 0;
}