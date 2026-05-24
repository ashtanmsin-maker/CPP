#include<iostream>
using namespace std;
int printarray(int *array,int idx,int n){
    if(idx==(n)){return array[n];};
    cout<<*(array+idx)<<endl;
    return (printarray(array,idx+1,n));
}
int main (){
    int a;
    cout<<"Enter the number of elements:\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for (int &ele : arr){cin>>ele;};
    cout<<"The array is:\n"<<printarray(arr,0,a-1)<<endl;
    return 0;
}