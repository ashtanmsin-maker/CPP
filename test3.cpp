#include<iostream>
using namespace std;

int find(int*arr,int target,int l,int r,int x){
    if(l>r){return -1;};
    int mid=l+(r-l)/2;
    if(arr[x][mid]==target){return mid;};
    if(arr[x][mid]>target){return find(arr,target,l,mid-1,x);};
    return find(arr,target,mid+1,r,x);
}

int binary(int* arr,int target,int l,int r){
    int mid=l+(r-l)/2;
    if(l<r){return r;};
    if(arr[mid][0]<=target){return binary(arr,target,mid+1,r);};
    return binary(arr,target,l,mid-1);
}

int main(){
    int a,b,target;
    cout<<"Enter the number rows\n";
    cin>>a;
    cout<<"Enter the number columns\n";
    cin>>b;
    int arr[a][b];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){for(int j=0;j<b;j++){cin>>arr[i][j];};};
    cout<<"Enter the target value:\n";
    cin>>target;

    int x=binary(arr,target,0,a-1);
    int y=find(arr,target,0,b-1,x);
    
    cout<<"Output:\n";;
    if(y==-1){cout<<"Not present";}
    else {cout<<"It is present at "<<x<<","<<y<<"index";};
    cout<<endl;
    return 0;
}