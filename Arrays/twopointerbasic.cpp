#include<iostream>
#include<vector>
using namespace std;
void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
};
int main(){
    vector<int> v;
    int a,ele;

    cout<<"Enter size:"<<endl;
    cin>>a;

    cout<<"Enter the elements:"<<endl;

    for(int i=0;i<a;i++){cin>>ele; v.push_back(ele);}

    int left=0,right=a-1;

    for(;left<right;){if((v[left]==1)&&(v[right]==0)){swap(v[left],v[right]);left++;right--;}
                        if((v[left]==0)&&(v[right]==0)){left++;}
                        if((v[left]==1)&&(v[right]==1)){right--;}           
                    }
                    
    cout<<"Output:"<<endl;
    for(int ele:v){cout<<ele<<"  ";}
    cout<<endl;                   
                         
    return 0;
}