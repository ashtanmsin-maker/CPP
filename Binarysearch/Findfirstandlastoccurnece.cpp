#include<iostream>
using namespace std;
int upper(int* arr,int target,int l,int r){
    if(l>r){return -1;};
    int mid=l+(r-l)/2;
    if(arr[mid]==target){int y =upper(arr,target,mid +1,r);
                            if(y==-1){return mid;}
                            else{return y;};};
    if(arr[mid]<target){return upper(arr,target,mid+1,r);}
    return upper(arr,target,l,mid-1);
    
}

int lower(int* arr,int target,int l,int r){
    if(l>r){return -1;};
    int mid=l+(r-l)/2;
    if(arr[mid]==target){int y =lower(arr,target,l,mid-1);
                            if(y==-1){return mid;}
                            else{return y;};};
    if(arr[mid]<target){return lower(arr,target,mid+1,r);};
    return lower(arr,target,l,mid-1);
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

    int u=lower(arr,target,0,a-1);
    int v=upper(arr,target,0,a-1);
    
    cout<<"Output:\n";
    if(u==-1){cout<<"Not present\n";}
    else {cout<<"Minimum index is present at "<<u<<"th index\n";};
    if(v==-1){cout<<"Not present\n";}
    else {cout<<"Maximum index is present at "<<v<<"th index\n";};
    cout<<endl;
    return 0;
}