#include <iostream>
#include <vector>
using namespace std;

int main() {

    auto f = 2.5;
    auto b = 5;
    auto c = "Rohit";
    auto d = 'A';

    cout << "Size of double: " << sizeof(f) << endl;
    cout << "Size of int: " << sizeof(b) << endl;
    cout << "Size of string literal(pointer): " << sizeof(c) << endl;
    cout << "Size of char: " << sizeof(d) << endl;


    vector<int> a = {6, 5, 4, 3, 2, 1};

    cout << "\nElements of the vector are:" << endl;


    for (auto x : a) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}