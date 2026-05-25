#include<iostream>
#include<cmath>
using namespace std;

bool check(int *arr,int n,int x,int i){
    if(i==n){cout<<"No\n";return 0;};
    if(arr[i]==x){cout<<"Yes\n";return 0;};
    return check(arr,n,x,i+1);
}

int main (){
    int a,x;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for (int &ele : arr){cin>>ele;};
    cout<<"Enter the target value\n";
    cin>>x;
    check(arr,a,x,0);
    return 0;
}