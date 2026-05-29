#include<iostream>
using namespace std;

void bubble(int *arr,int n,int i=0){
    if(i==n-1){return;};
    for(int j=1;j<n-i;j++){if(arr[j]<arr[j-1]){
        int temp;
        temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;};};
    i++;
    return bubble(arr,n,i);    
    }

int main (){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};
    bubble(arr,a,0);
    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}