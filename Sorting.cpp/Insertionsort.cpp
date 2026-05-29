#include<iostream>
using namespace std;

void insertion(int *arr,int n,int i=1){
    if(i==n){return ;};
    for(int j=i;j>0;j--){
        if(arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;}
        else{break;};
    }
    i++;
    return insertion(arr,n,i);
}


int main (){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};
    insertion(arr,a,1);
    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}