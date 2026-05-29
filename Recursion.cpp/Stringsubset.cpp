#include<iostream>
#include<vector>
#include <string>
using namespace std;

void subset_string(string &str,int i,string result,vector<string>&li){
    if(i==str.length()){li.push_back(result);return ;};
    subset_string(str,i+1,result + str[i],li);
    subset_string(str,i+1,result,li);
}

int main (){
    vector<string> res;
    string str;
    cout<<"Enter the string:\n";
    cin>>str;
    cout<<"Output:\n";
    subset_string(str,0,"",res);
    for(int i=0;i<res.size();i++){cout<<res[i]<<" ";};
    cout<<endl;
    return 0;
}