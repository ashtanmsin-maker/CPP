#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    vector <int> a,b;
    int n,ele,r=0,c,k{1};

    cout<<"Enter the number of elements for sorted array\n";
    cin>>n;
    cout<<"Enter the elements in increasing order for sorted array\n";
    for (int i=0;i<n;i++){cin>>ele;a.push_back(ele);};
    
    cout<<"Enter the target value\n";
    cin>>c;

    int t{n-1};

    for(int i=0;i<n;i++){if(a[r]+a[t]==c){k=0;break;}
                         else {if(a[r]+a[t]<c){r++;}
                         else {if(a[r]+a[t]>c){t--;}}}}
    
    if(k){cout<<"NO";}
    else {cout<<"YES";}                     
    return 0;
}