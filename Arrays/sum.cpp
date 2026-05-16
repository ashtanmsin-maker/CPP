#include<iostream>
using namespace std;
int main(){
    int arr[5],sum{0};
    for (int &ele : arr){cin>>ele;};
    for (int ele : arr){sum+=ele;};
    cout<<sum;
    return 0;
}