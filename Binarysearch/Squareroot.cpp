#include<iostream>
using namespace std;

int binary(int a,int l,int r){
    int mid=l+(r-l)/2;
    if(l>r){return r;};
    if(mid*mid<=a){
        return binary(a,mid+1,r);
    }
    else{
        return binary(a,l,mid-1);
    };
}
int main(){
    int a;
    cout<<"Enter the element\n";
    cin>>a;

    int x=binary(a,0,a);
    
    cout<<"Output:\n"<<x;
    cout<<endl;
    return 0;
}