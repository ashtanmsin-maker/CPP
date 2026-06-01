#include<iostream>
#include<vector>
using namespace std;

int max(int &a,int &b,int &c){
    if((a>=b)&&(a>=c)){return a;}
    else {if((b>=a)&&(b>=c)){return b;}
            else{if((c>=b)&&(c>=a)){return c;};};};
}

void binary(int* arr,int l,int r,vector <int>&v){
    if(l>=r){return ;};
    int mid=l+(r-l)/2;
    if(max(arr[mid],arr[mid+1],arr[mid+2])==arr[mid+1]){
        v.push_back(mid+1);
        binary(arr,l,mid-1,v);
        binary(arr,mid+3,r,v);
    };
    if(max(arr[mid],arr[mid+1],arr[mid+2])==arr[mid]){
        binary(arr,l,mid,v);
        binary(arr,mid+3,r,v);
    };
    if(max(arr[mid],arr[mid+1],arr[mid+2])==arr[mid+2]){
        binary(arr,l,mid-1,v);
        binary(arr,mid+2,r,v);
    };
}

int main(){
    int a;
    vector<int> v;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements:\n";
    for(int i=0;i<a;i++){cin>>arr[i];};

    binary(arr,1,a-3,v);
    
    cout<<"Output:\n";;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    };
    cout<<endl;
    return 0;
}