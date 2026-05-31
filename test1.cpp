#include<iostream>
using namespace std;

int binary(int* arr,int target,int l,int r){
    if(l>r){return -1;};
    int mid=l+(r-l)/2;
    if(arr[0]==target){return 0;}
    else {if(arr[1]==target){return 1;};};
    if(arr[mid]==target){return mid;};
    if(arr[mid]>=target){return binary(arr,target,l,mid-1);}
    else {if(arr[mid]<target){return binary(arr,target,mid+1,r);};};
    
}
int main(){
    int a,target;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};
    cout<<"Enter the target value:\n";
    cin>>target;

    int x=binary(arr,target,0,a-1);
    
    cout<<"Output:\n";;
    if(x==-1){cout<<"Not present";}
    else {cout<<"It is present at "<<x<<"th index";};
    cout<<endl;
    return 0;
}