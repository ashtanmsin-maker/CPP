#include<iostream>
#include<string>
#include<vector>
using namespace std;

void prefix(vector<string>& v,int n){
    int min=size(v[0]);
    for(int i=1;i<n;i++){if(size(v[i])<min){min=size(v[i]);};};
    for(int i=0;i<min;i++){
        vector<int> v2(256,0);
        for(int j=0;j<n;j++){
            v2[(int)v[j][i]]++;
        };
        if(v2[(int)v[0][i]]!=n){return ;};
        cout<<v[0][i];
    };
}

int main(){
    int n;
    cout<<"Enter the number of words:\n";
    cin>>n;
    vector<string> v(n);
    cout<<"Enter the words:\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    };
    cout<<"The largest prefix is:\n";
    prefix(v,n);
    cout<<endl;
    
    return 0;
}