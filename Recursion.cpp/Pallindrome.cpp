#include<iostream>
using namespace std;

int reverseNum(int n, int rev) {
    if (n == 0) {return rev;}
    rev = rev * 10 + (n % 10);
    return reverseNum(n / 10, rev);
}

int main() {
    int n;
    cout << "Enter a number: \n";
    cin >> n;

    int reversed = reverseNum(n, 0);

    if (n == reversed) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    return 0;
}
//not done by me it was hard