#include<iostream>
using namespace std;

void countfreq(int *arr,int *brr,int n,int max){
    for(int j=0;j<n;j++){
        ++brr[arr[j]];
    };
    for(int j=1;j<max+1;j++){
        brr[j]+=brr[j-1];
    };
    return ;
}

void count(int *arr,int *ans,int n){
    int max=arr[0];
    for(int i=1;i<n;i++){if(arr[i]>max){max=arr[i];};};
    int brr[max+1]={0};
    countfreq(arr,brr,n,max);
    for(int i=n-1;i>-1;i--){
        ans[--brr[arr[i]]]=arr[i];
    };

}

int main(){
    int a;
    cout<<"Enter the number of elements:\n";
    cin>>a;
    cout<<"Enter the elements:\n";
    int arr[a],ans[a];
    for(int i=0;i<a;i++){cin>>arr[i];};

    count(arr,ans,a);

    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<ans[i]<<" ";};
    cout<<endl;
    return 0;
}