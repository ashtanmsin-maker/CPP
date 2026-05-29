#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int position(int *arr,int l,int r){
    int left=l-1;
    int right=l;
    for(;right<r;right++){
        if(arr[right]<=arr[r]){left++;swap(arr[left],arr[right]);};
    };
    swap(arr[r],arr[left+1]);
    return (left+1);    
}

void divide(int *arr,int l,int r){
    if(l>=r){return ;};
    int pi=position(arr,l,r);
    divide(arr,l,pi-1);
    divide(arr,pi+1,r);
}

int main(){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements\n";
    for(int i=0;i<a;i++){cin>>arr[i];};

    divide(arr,0,a-1);

    cout<<"Output is:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}