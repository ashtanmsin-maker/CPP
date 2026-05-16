#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    vector <int> a,b,c;
    int n,m,ele,r=0,t=0;

    cout<<"Enter the number of elements for first array\n";
    cin>>n;
    cout<<"Enter the elements in increasing order for first array\n";
    for (int i=0;i<n;i++){cin>>ele;a.push_back(ele);};
    
    cout<<"Enter the number of elements for second array\n";
    cin>>m;
    cout<<"Enter the elements in increasing order for second array\n";
    for (int i=0;i<m;i++){cin>>ele;b.push_back(ele);};

    for(int i=0;i<(n+m);i++){if(r==n){for(;t<m;t++){c.push_back(b[t]);};break;}
                             if(t==m){for(;r<n;r++){c.push_back(a[r]);};break;}
                             if(a[r]<b[t]){c.push_back(a[r]);r++;}
                             else {if(b[t]<a[r]){c.push_back(b[t]);t++;}
                                   else {if(a[r]==b[t]){c.push_back(a[r]);r++;}}}}

    for(int ele:c){cout<<ele<<"  ";}
    cout<<endl;                  
    return 0;
}