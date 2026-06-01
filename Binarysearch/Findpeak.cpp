#include<iostream>
using namespace std;

int binary(int* arr,int l,int r){
    if(l==r){return l;};
    int mid=l+(r-l)/2;
    if(arr[mid]>=arr[mid+1]){return binary(arr,l,mid);};
    return binary(arr,mid+1,r);
}

int main(){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};

    int x=binary(arr,0,a-1);
    
    cout<<"Output:\n";;
    cout<<"It is present at "<<x<<"th index";
    cout<<endl;
    return 0;
}