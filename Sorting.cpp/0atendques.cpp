//Write a program to sort array 
//without using other arrays to put 0 at end 
//also no change in order of nonzero elements
#include<iostream>
using namespace std;

void insertion(int *arr,int n,int i){
    if(i==-1){return ;};
    for(int j=i;j>0;j--){
        if(arr[j-1]==0){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;};    
    }
    i--;
    return insertion(arr,n,i);
}


int main (){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a+1];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};
    arr[a]=0;
    insertion(arr,a,a);
    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}