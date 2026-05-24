#include<iostream>
using namespace std;
int sum(int *array,int idx,int n){
    if(idx==(n-1)){return array[n-1];};
    return (array[idx]+sum(array,idx+1,n));
}
int main (){
    int a;
    cout<<"Enter the number of elements:\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for (int &ele : arr){cin>>ele;};
    cout<<"The sum is:\n"<<sum(arr,0,a)<<endl;
    return 0;
}