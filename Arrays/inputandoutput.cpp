#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int ele{0};
    for(int i=0;i<5;i++){cin>>ele; v.push_back(ele);}
    for(int &ele:v){cout<<ele<<"  ";}
    cout<<endl;

    return 0;
}