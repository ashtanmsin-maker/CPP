#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int ele{0},x,a,b;

    cout<<"Enter size:"<<endl;
    cin>>a;

    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<a;i++){cin>>ele; v.push_back(ele);}

    cout<<"Enter the number of skips"<<endl;
    cin>>b;

    for(int i=0;i<b;i++){for(int j=(a-1);j>0;j--){v[j]=v[j-1]+v[j];v[j-1]=v[j]-v[j-1];v[j]=v[j]-v[j-1];}}

    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;

    return 0;
}