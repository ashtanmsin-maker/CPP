#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v;
    int ele{0},x,a;

    cout<<"Enter size:"<<endl;
    cin>>a;

    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<a;i++){cin>>ele; v.push_back(ele);}

    int b=v[0];
    for(int i=1;i<a;i++){b=b^v[i];};
    cout<<b;
    
    return 0;
}