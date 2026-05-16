#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    vector<int> ans;
    int a,ele;

    cout<<"Enter size:"<<endl;
    cin>>a;

    cout<<"Enter the elements:"<<endl;

    for(int i=0;i<a;i++){cin>>ele; v.push_back(ele);}
    
    int left=0,right=a-1;

    for(int i=0;left<right;i++){if(abs(v[left])<abs(v[right])){ans.push_back(v[right]);right--;}
                         if(abs(v[left])>abs(v[right])){ans.push_back(v[left]);left++;}
                         if(abs(v[left])==abs(v[right])){ans.push_back(v[left]);left++;}
                        };

    reverse(ans.begin(),ans.end());
    cout<<"Output:"<<endl;
    for(int ele:ans){cout<<ele*ele<<"  ";}
    cout<<endl;                   
                         
    return 0;
}