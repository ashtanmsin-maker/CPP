#include<iostream>
using namespace std;

int binary(int* arr,int l,int r){
    int mid=l+(r-l)/2;
    if(r==l){return 0;};
    if(arr[l]>arr[l+1]){return (l+1);};
    if(arr[r]>arr[mid]){return binary(arr,l,mid);};
    return binary(arr,mid,r);
    
}
int main(){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};

    int x=binary(arr,0,a-1);
    
    cout<<"Output:\n";
    cout<<"It is present at "<<x<<"th index";
    cout<<endl;
    return 0;
}