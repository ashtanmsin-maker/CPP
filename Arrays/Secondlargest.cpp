#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int ele{0},x,a;

    cout<<"Enter size:"<<endl;
    cin>>a;

    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<a;i++){cin>>ele; v.push_back(ele);}

    int max=v[0];
    if(v[0]<v[1]){x=v[0];}
    if(v[0]>v[1]){x=v[1];}

    for(int i=0;i<a;i++){if(v[i]>max){x=max;max=v[i];}if ((v[i]<max)&&(v[i]>x)){x=v[i];}}

    cout<<"Second max is :"<<x<<endl;
     
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;

    return 0;
}