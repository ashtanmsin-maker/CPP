#include<iostream>
using namespace std;
int max(int *array,int idx,int n,int ans){
    if(*(array+idx)>ans){ans=*(array+idx);};
    if(idx==(n)){return ans;};
    return (max(array,idx+1,n,ans));
}
int main (){
    int a;
    cout<<"Enter the number of elements:\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for (int &ele : arr){cin>>ele;};
    cout<<"The maximum value is:\n"<<max(arr,0,a-1,arr[0])<<endl;
    return 0;
}