#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter the character"<<endl;
    cin>>a;
    switch (a){case 'a':;
               case 'e':;
               case 'i':;
               case 'o':;
               case 'u': cout<<"It is a vowel";break;
            default:cout<<"It is a consonant";};
    return 0;
}