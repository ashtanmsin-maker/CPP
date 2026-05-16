#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void swap(int &c,int &b){
    c=c+b;
    b=c-b;
    c=c-b;
};
int main(){
    vector<int> v;
    int a,ele;

    cout<<"Enter size:"<<endl;
    cin>>a;

    cout<<"Enter the elements:"<<endl;

    for(int i=0;i<a;i++){cin>>ele; v.push_back(ele);}

    int left=0,right=a-1;

    for(int i=0;left<right;i++){
                        if((abs(v[left])>abs(v[right]))&&(abs(v[left])>=abs(v[left+1]))){swap(v[left],v[right]);right--;}
                        if((abs(v[left])>abs(v[right]))&&(abs(v[left])<abs(v[left+1]))){swap(v[left],v[left+1]);}
                        if(abs(v[right])!=0){if(abs(v[left])==abs(v[right])){right--;}}
                        if(abs(v[right])==0){left++;}           
                    }

    cout<<"Output:"<<endl;
    for(int ele:v){cout<<ele*ele<<"  ";}
    cout<<endl;                   
                         
    return 0;
}