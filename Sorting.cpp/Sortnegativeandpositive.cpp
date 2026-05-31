#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return ;
}

void sort(int* arr,int n){
    int left=0,right=n-1;
    for(;left<=right;){
        if((arr[left]<=0)&&(arr[right]>=0)){left++;right--;}
            else {if((arr[left]<0)&&(arr[right]<=0)){left++;}
                else{if((arr[left]>0)&&(arr[right]>=0)){right--;}
                    else{if((arr[left]>0)&&(arr[right]<=0)){swap(arr[left],arr[right]);left++;right--;};};};};
    };
    return;
}
int main(){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};

    sort(arr,a);

    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}