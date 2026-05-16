#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v {3,6,8,2,7};

    v.push_back(88);
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;

    v.insert(v.begin()+2,44);
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;

    v.pop_back();
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;

    v.erase(v.begin()+3);
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;

    reverse(v.begin(),v.end());
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;
    //Use header file #include <algorithm>

    v.clear();
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;
    
    return 0;
}