#include<iostream>
using namespace std;
//Here in swap function,adderesses are taken instead of actual values 
//so change in values of addresses is global
void swap (int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main (){
    int a,b;
    cout<<"Enter the numbers:\n";
    cin>>a>>b;
    int *p1=&a,*p2=&b;
    //addresses are put into swap function
    swap(p1,p2);
    cout<<"Swapped numbers are:"<<endl<<a<<endl<<b<<endl;
    return 0;
}
