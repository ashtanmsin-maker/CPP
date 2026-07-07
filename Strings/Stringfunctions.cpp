#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:\n";
    getline(cin,str);
    
    reverse(str.begin(),str.end());
    cout<<"Reverse : "<<str<<endl;

    str=str.substr(6,2);
    cout<<"Substring : "<<str<<endl;

    string str2="li";
    str=str+str2;
    cout<<"Add : "<<str<<endl;

    char ch1[15]="hello";
    char ch2[15]="ji";
    strcat(ch1,ch2);
    cout<<"Concat char arrays : "<<ch1<<endl;

    char ch3='h';
    str.push_back(ch3);
    cout<<"Pushback function : "<<str<<endl;

    cout<<"Size of string : "<<str.size()<<endl;

    cout<<"Size of character array : "<<strlen(ch1)<<endl;

    int a=3;
    str="44";
    cout<<(str+to_string(a))<<endl;

    return 0;
}