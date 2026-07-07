#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isomorphic(string &str1,string &str2){
    if(size(str1)!=size(str2)){return false;};
    int max_ele1=(int)str1[0];
    for(int i=1;i<size(str1);i++){if((int)str1[i]>max_ele1){max_ele1=(int)str1[i];};};
    int max_ele2=(int)str2[0];
    for(int i=1;i<size(str1);i++){if((int)str2[i]>max_ele2){max_ele2=(int)str2[i];};};
    vector<int> v1(max_ele1+1,-1);
    vector<int> v2(max_ele2+1,-1);
    for(int i=0;i<size(str1);i++){
        if(v1[(int)str1[i]]!=v2[(int)str2[i]]){return false;};
        v1[(int)str1[i]]=i;
        v2[(int)str2[i]]=i;
    };
    return true;
}

int main(){
    string str1,str2;
    cout<<"Enter the first word:\n";
    cin>>str1;
    cout<<"Enter the second word:\n";
    cin>>str2;
    if(isomorphic(str1,str2)){cout<<"These are isomorphic numbers\n";}
    else{cout<<"These are not isomorphic numbers\n";};
    
    return 0;
}