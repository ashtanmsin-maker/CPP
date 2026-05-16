#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5};
    for (int ele : arr){cout<<ele<<endl;};
    //OR
    int a = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<a;i++){cout<<arr[i]<<endl;};
    return 0;
}