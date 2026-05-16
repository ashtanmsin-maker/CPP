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

    cout<<"Enter target sum:"<<endl;
    cin>>x;

    for(int i=0;i<a;i++){for(int j=i+1;j<a;j++){for(int k=j+1;k<a;k++){if(v[i]+v[j]+v[k]==x){cout<<"One Pair is:"<<v[i]<<","<<v[j]<<" and "<<v[k]<<endl;break;}}}}
     
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;

    return 0;
}