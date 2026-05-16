#include<iostream>
using namespace std;
int main(){
    int arr[5]={};
    int abb[5]={};
    //for input:
    for (int &ele : abb){cin>>ele;};//&ele as ele is a copy so it is changed after every iteration
                                    //It will not be a copy if & is used
    //OR
    int a = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<a;i++){cin>>arr[i];};
    //Now for output:
    cout<<"Output:";
    for (int ele : abb){cout<<ele<<endl;};
    for (int ele : arr){cout<<ele<<endl;};
    return 0;
}