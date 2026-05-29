#include<iostream>
using namespace std;

void selection(int *arr,int n,int i=0){
    if(i==n-1){return;};
    int min=arr[i],k=i;
    
    for(int j=i+1;j<n;j++){if(arr[j]<min){min=arr[j];k=j;};};
    if(min==arr[i]){;}
    else{
        arr[k]=arr[i];
        arr[i]=min;
         };
    i++;
    return selection(arr,n,i);   

    }

int main (){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};
    selection(arr,a,0);
    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}