#include<iostream>
using namespace std;
string f(string &s,int idx,int n){
    if(idx==n)return "";
    string curr = "";
    curr += s[idx];
    return ((s[idx]=='a')?"":curr) + f(s,idx+1,n);
}
int main (){
    string s = "abddaah";
    int n{7};
    cout<<"The final string is:\n"<<f(s,0,n)<<endl;
    return 0;
}
//samajh nai aaya ache se string nai aata janabeaali