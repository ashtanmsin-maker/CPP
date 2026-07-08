#include<iostream>
using namespace std;

void countit (int* arr,int n,int& maxi,int k){
    int start=0,end=0,zero_count=0;
    for(;end<n;end++){
        if(arr[end]==0){
            zero_count++;
        };
        while(zero_count>k){
            if(arr[start]==0){
                zero_count--;};
            start++;
        };
        maxi=max(maxi,end-start+1);
    }
}

int main(){
    int n,maxi{0},k;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    cout<<"Enter the number of 1s to be inserted:\n";
    cin>>k;

    countit(arr,n,maxi,k);

    cout<<"Max number of consecutive 1s are:\n"<<maxi<<endl;

    
    return 0;
}
