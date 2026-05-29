#include<iostream>
using namespace std;

void bubble(int *arr,int i,int n){
    if(i==n-1){return;};
    bool flag{false};
    for(int j=1;j<n-i;j++){if(arr[j]<arr[j-1]){
        flag=true;
        int temp;
        temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;};};
    i++;
    if(!flag){return ;}
    else{return bubble(arr,i,n);};    
    }

int main (){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};
    bubble(arr,0,a);
    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}