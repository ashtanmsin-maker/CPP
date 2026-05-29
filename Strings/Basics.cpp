#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,str2;
    //cout<<"Input (default):\n";
    //cin>>str;

    cout<<"Input (by getline):\n";
    getline(cin,str2);
    
    //Note that characters after spaces are not stored due to << operator so we use getline instead
    //cout<<"Output:\n";
    //cout<<str<<endl;
    cout<<"Output:\n"<<str2<<endl;
    return 0;
}