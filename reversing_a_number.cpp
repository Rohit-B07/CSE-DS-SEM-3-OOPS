#include <iostream>
using namespace std;

void reverse(int n, int &rev) {
    rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
}

int main() {
    int num, rev;
    cin >> num;
    reverse(num, rev);
    cout << &rev << endl;
    return 0;
}
