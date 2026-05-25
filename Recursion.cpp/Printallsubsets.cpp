#include<iostream>
#include<cmath>
using namespace std;

void subset(int *ptr,int n,int i,int r,int sum){
    if(n==1){cout<<*ptr<<","<<0;return ;};
    sum+=*(ptr+i);
    cout<<sum<<",";
    if(r-1){r--;return subset(ptr,n,i+1,r,sum);}
    else {n--;ptr=ptr+1;sum=0;r=n;return subset(ptr,n,0,r,0);};
}

int main (){
    int a,x;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for (int &ele : arr){cin>>ele;};
    cout<<"Output:\n";
    subset(arr,a,0,a,0);
    cout<<endl;
    return 0;
}