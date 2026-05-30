#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucket(float *arr,int n){
    float max=arr[0],min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){min=arr[i];};
        if(arr[i]>max){max=arr[i];};
    };
    vector<vector<float>> v(n,vector<float>());
    for(int i=0;i<n;i++){
        int index=((arr[i]-min)/(max-min))*(n-1);
        v[index].push_back(arr[i]);
    };
    int k{0};
    for(int i=0;i<n;i++){
        if(v[i].size()==0){;}
        else {if(v[i].size()==1){arr[k++]=v[i][0];}
              else {sort(v[i].begin(),v[i].end());
                    for(int j=0;j<v[i].size();j++){arr[k++]=v[i][j];}
                        ;};};
    }
}

int main(){
    int a;
    cout<<"Enter the number of elements:\n";
    cin>>a;
    cout<<"Enter the elements:\n";
    float arr[a],ans[a];
    for(int i=0;i<a;i++){cin>>arr[i];};

    bucket(arr,a);

    cout<<"Output:\n";
    for(int i=0;i<a;i++){cout<<arr[i]<<" ";};
    cout<<endl;
    return 0;
}