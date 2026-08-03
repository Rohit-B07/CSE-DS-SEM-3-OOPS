#include <iostream>
using namespace std;

class Demo {
public:
    void show() {
        cout << "Show No Value" << endl;
    }

    void show(int a) {
        cout << "Show One Value : " << a << endl;
    }

    void show(int a, int b) {
        cout << "Addition of Two Values : " << a + b << endl;
    }
};


inline double area(int base, int height) {
    return 0.5 * base * height;
}


int add(int x = 5, int y = 4) {
    return x + y;
}

int main() {
    Demo s;

    cout << "----- FUNCTION OVERLOADING -----"<<endl;
    s.show();
    s.show(6);
    s.show(4, 6);
    cout<<endl;


    cout << "----- INLINE FUNCTION -----"<<endl;
    cout << "Area of Triangle = " << area(2, 6) << endl;
    cout<<endl;


    cout << "----- DEFAULT ARGUMENTS-----"<<endl;
    cout << "Addition (7,8) = " << add(7, 8) << endl;
    cout << "Addition (Default) = " << add() << endl;
}

