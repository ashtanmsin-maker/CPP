#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v;
    int n,ele,sum{0};
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for (int i=0;i<n;i++){cin>>ele;sum=sum+=ele;v.push_back(sum);};
    for (int ele:v){cout<<ele<<endl;};

                         
    return 0;
}