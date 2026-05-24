#include<iostream>
#include<string>
using namespace std;
void find (string s,char ch,int *p1,int *p2){
    for(int i=0;i<s.size();i++){if(s[i]==ch){*p1=i;break;};};
    for(int i=s.size()-1;i>=0;i--){if(s[i]==ch){*p2=i;break;};};
}
int main (){
    int j{-1},k{-1};
    char ch='a';
    int *p1=&j,*p2=&k;
    string s = "sbbacchak";
    find(s,ch,p1,p2);
    cout<<*p1<<endl<<*p2<<endl;
    
    return 0;
}