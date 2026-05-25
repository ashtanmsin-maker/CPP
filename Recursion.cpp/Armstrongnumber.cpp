#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int x,int *k){
    if (!(x/10)){return pow(x,*k);};
    *k=*k+1;
    return (armstrong(x/10,k)+pow(x%10,*k));
}

int main (){
    int a,b;
    cout<<"Enter the numbers\n";
    cin>>a;
    b=1;
    if(a==armstrong(a,&b)){cout<<"It is an armstrong number\n";}
    else{cout<<"It is not an armstrong number\n";};
    return 0;
}