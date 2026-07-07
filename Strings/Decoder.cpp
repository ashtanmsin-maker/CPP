#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void decoder(string &str1,string &str2,string &str3,int n){
    for(int i=n;i>=0;--i){
        if(str1[i]==']'){str2="";continue;}
        else {if(str1[i]=='['){
             if(str2==""){
                string str4="";
            for(int j=i-1;((j>=0)&&(((int)str1[j]>=48)&&((int)str1[j]<=57)));j--){
                str4.push_back(str1[j]);
                i=j;
            };
            reverse(str4.begin(),str4.end());
            int a=stoi(str4);
            string str5=str3;
            for(int k=1;k<a;k++){str3=str3+str5;};
            return ;
            };
            reverse(str2.begin(),str2.end());
            string str4="";
            for(int j=i-1;((j>=0)&&(((int)str1[j]>=48)&&((int)str1[j]<=57)));j--){
                str4.push_back(str1[j]);
                i=j;
            };
            reverse(str4.begin(),str4.end());
            int a=stoi(str4);
            string str5=str2;
            for(int k=1;k<a;k++){
                str2=str2+str5;
            };
            str3=str2+str3;
                    }
                    else {if((str2!="")&&(str3!="")){str3=str1[i]+str3;str2="";}
                            else{str2=str2+str1[i];};};};

    };
    return;
}

int main(){
    string str1,str2="",str3="";
    cout<<"Enter the code\n";
    cin>>str1;
    decoder(str1,str2,str3,size(str1)-1);
    cout<<"Decoded string is:\n"<<str3<<endl;

    
    return 0;
}
//Good question