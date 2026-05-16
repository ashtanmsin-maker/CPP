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

    cout<<"Enter x:"<<endl;
    cin>>x;

    for(int i=(v.size()-1);i>=0;i--){if(v[i]==x){cout<<"Last occurence is at index:"<<i<<endl;break;}}
     
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;

    return 0;
}