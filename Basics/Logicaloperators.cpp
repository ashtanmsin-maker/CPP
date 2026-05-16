#include<iostream>
using namespace std;
int main(){
    bool a{true},b{true},c{false};
    cout<<boolalpha<<((a&&b)||c);
    return 0;
}