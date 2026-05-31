#include<iostream>
using namespace std;

void sort(int* arr,int *brr,int*crr,int a,int b){
    int left=0,right=0;
    for(int i=0;i<(a+b);i++){
        if(((left<a)&&(right<b))&&(arr[left]<=brr[right])){crr[i]=arr[left];left++;}
            else {if(((left<a)&&(right<b))&&(arr[left]>brr[right])){crr[i]=brr[right];right++;}
                else{if(left==a){crr[i]=brr[right++];}
                    else{if(right==b){crr[i]=arr[left++];};};};};
    };
    return ;
}
int main(){
    int a,b;
    cout<<"Enter the number of elements in first array:\n";
    cin>>a;
    cout<<"Enter the number of elements in second array:\n";
    cin>>b;
    int arr[a],brr[b],crr[a+b];
    cout<<"Enter the elements for first array:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};
    cout<<"Enter the elements for second array:\n";
    for(int i=0;i<b;i++){cin>>brr[i];};

    sort(arr,brr,crr,a,b);

    cout<<"Output:\n";
    for(int i=0;i<(a+b);i++){cout<<crr[i]<<" ";};
    cout<<endl;
    return 0;
}