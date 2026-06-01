#include<iostream>
using namespace std;

int binary(int* arr,int target,int l,int r){
    int mid=l+(r-l)/2;
    if(l<r){return arr[mid];};
    if(arr[mid]<=target){return binary(arr,target,mid+1,r);};
    return binary(arr,target,l,mid-1);
}
int main(){
    int a,target;
    cout<<"Enter the element\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};
    cout<<"Enter the target value:\n";
    cin>>target;

    int x=binary(arr,target,0,a-1);
    
    cout<<"Output:\n"<<x;
    cout<<endl;
    return 0;
}