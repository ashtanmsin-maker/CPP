#include<iostream>
using namespace std;
int main(){
    int a,sum0{0},sum1{0},sum2{0};
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i]==0){sum0++;};
        if(arr[i]==1){sum1++;};
        if(arr[i]==2){sum2++;};
    };

    for(int i=0;i<a;i++){
        if(sum0){sum0--;arr[i]=0;}
        else{if(sum1){sum1--;arr[i]=1;}
            else{if(sum2){sum2--;arr[i]=2;};};};
    }

    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}