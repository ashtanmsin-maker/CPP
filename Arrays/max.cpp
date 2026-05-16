#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for (int &ele : arr){cin>>ele;};
    int a=arr[0];
    for (int ele : arr){if(ele>a){a=ele;};};
    cout<<a;
    return 0;
}