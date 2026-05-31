#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return ;
}

int position(int* arr,int l,int r,int k){
    int left=l-1,right=l;
    for(int i=0;i<r-l;i++){
        if(arr[r]>arr[right]){left++;swap(arr[right],arr[left]);right++;}
        else{right++;};
    };
    swap(arr[left+1],arr[r]);
    return (left+1);
}

void quicksort(int* arr,int l,int r,int k){
    if(l>=r){return ;};
    int pi=position(arr,l,r,k);
    if(pi==k){return ;};
    if(pi>k){quicksort(arr,l,pi-1,k);};
    if(pi<k){quicksort(arr,pi+1,r,k);};
}
int main(){
    int a,k;
    cout<<"Enter the number of elements:\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};
    cout<<"Enter the value of K:\n";
    cin>>k;
    
    quicksort(arr,0,a-1,k-1);

    cout<<"Output:"<<arr[k-1];
    cout<<endl;
    return 0;
}