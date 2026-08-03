#include <iostream>
#include <algorithm>
using namespace std;

void swap_call_by_value(int x, int y) {
    cout << "Before swap (by value): " << x << " " << y << endl;
    swap(x, y);
    cout << "After swap (by value): " << x << " " << y << endl;
}

void swap_call_by_pointer(int *x, int *y) {
    cout << "Before swap (by address): " << *x << " " << *y << endl;
    swap(*x, *y);
    cout << "After swap (by address): " << *x << " " << *y << endl;
}

void swap_call_by_reference(int &x, int &y) {
    cout << "Before swap (by reference): " << x << " " << y << endl;
    swap(x, y);
    cout << "After swap (by reference): " << x << " " << y << endl;
}

int main() {
    int a, b;
    cin >> a >> b;


    swap_call_by_value(a, b);
    cout << "In main after call by value: " << a << " " << b << endl << endl;


    int p = a, q = b;
    swap_call_by_pointer(&p, &q);
    cout << "In main after call by address: " << p << " " << q << endl << endl;


    int r = a, s = b;
    swap_call_by_reference(r, s);
    cout << "In main after call by reference: " << r << " " << s << endl;

    return 0;
}