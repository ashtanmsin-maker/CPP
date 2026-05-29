#include<iostream>
using namespace std;

void conquer(int *arr,int l,int mid,int r){
    int an=mid-l+1;
    int bn=r-mid;
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){a[i]=arr[l+i];};
    for(int j=0;j<bn;j++){b[j]=arr[mid+1+j];};

    int i{0},j{0},k{l};
    for(;(i<an)&&(j<bn);){
        if(a[i]<b[j]){arr[k++]=a[i++];}
        else{arr[k++]=b[j++];};};

        while (i<an){arr[k++]=a[i++];};
        while (j<bn){arr[k++]=b[j++];};
        
}

void divide(int *arr,int l,int r){
    if(r-l==0){return ;};
    
    int mid = (l+r)/2;
    divide(arr,l,mid);
    divide(arr,mid+1,r);
    conquer(arr,l,mid,r);
}

int main(){
    int a;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements\n";
    for(int i=0;i<a;i++){cin>>arr[i];};

    divide(arr,0,a-1);

    cout<<"Output is:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}