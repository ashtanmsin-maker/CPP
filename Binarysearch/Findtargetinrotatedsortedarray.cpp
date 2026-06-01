#include<iostream>
using namespace std;

int find(int* arr,int target,int l,int r){
    if(l>r){return -1;};
    int mid=l+(r-l)/2;
    if(arr[mid]==target){return mid;};
    if(arr[mid]<target){return find(arr,target,mid+1,r);};
    return find(arr,target,l,mid-1);
}

int binary(int* arr,int l,int r){
    int mid=l+(r-l)/2;
    if(r==l){return 0;};
    if(arr[l]>arr[l+1]){return (l+1);};
    if(arr[r]>arr[mid]){return binary(arr,l,mid);};
    return binary(arr,mid,r);
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

    int x=binary(arr,0,a-1),y;
    if(arr[a-1]>=target){y=find(arr,target,x,a-1);}
    else{y=find(arr,target,0,x-1);};
    
    cout<<"Output:\n";
    if(y==-1){cout<<"Not present";}
    else{cout<<"It is present at "<<y<<"th index";};
    cout<<endl;
    return 0;
}