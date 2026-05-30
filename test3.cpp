#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<vector<int>> v{{1,2},{3,4,5}};
    cout<<v[0].size();
    cout<<endl;
    return 0;
}