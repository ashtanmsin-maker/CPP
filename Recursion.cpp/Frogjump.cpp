#include<iostream>
#include<cmath>
using namespace std;

int frog(int *arr,int n,int i,int *energy){
    if (i==(n-1)){return *energy;};
    if (i==(n-2)){return *energy + abs(arr[n-1]-arr[n-2]);};
    if (abs(arr[i]-arr[i+1])+abs(arr[i+1]-arr[i+2])<abs(arr[i]-arr[i+2])){
        *energy+=abs(arr[i]-arr[i+1]);return frog(arr,n,i+1,energy);}
    else{*energy+=abs(arr[i]-arr[i+2]);return frog(arr,n,i+2,energy);};
}

int main (){
    int a,energy{0};
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the heights:\n";
    for (int &ele : arr){cin>>ele;};
    int b=frog(arr,a,0,&energy);
    cout<<"Total energy used is:"<< b<<endl;
    return 0;
}