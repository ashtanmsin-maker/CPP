#include<iostream>
#include<cmath>
using namespace std;

void countfreq(int *arr,int *brr,int n,int max,int x){
    for(int j=0;j<n;j++){
        ++brr[arr[j]%x];
    };
    for(int j=1;j<max+1;j++){
        brr[j]+=brr[j-1];
    };
    return ;
}

void count(int *arr,int *ans,int n,int x){
    int max=arr[0]%x;
    for(int i=1;i<n;i++){if(arr[i]%x>max){max=arr[i]%x;};};
    int brr[max+1]={0};
    countfreq(arr,brr,n,max,x);
    for(int i=n-1;i>-1;i--){
        ans[--brr[arr[i]%x]]=arr[i]%x;
    };
    return ;
}

void radix(int *arr,int *ans,int n){
    int max_ele=arr[0],k{0},x{1};
    for(int j=1;j<n;j++){
        if(arr[j]>max_ele){max_ele=arr[j];};
    };
 
    while(max_ele!=0){
        max_ele/=10;
        k++;
    };
    for(int i=0;i<k;i++){
        x*=10;
        count(arr,ans,n,x);
    };
    return ;
}

int main(){
    int a;
    cout<<"Enter the number of elements:\n";
    cin>>a;
    cout<<"Enter the elements:\n";
    int arr[a],ans[a];
    for(int i=0;i<a;i++){cin>>arr[i];};

    radix(arr,ans,a);

    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<ans[i]<<" ";};
    cout<<endl;
    return 0;
}