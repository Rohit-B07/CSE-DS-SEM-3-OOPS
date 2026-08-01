#include <iostream>
using namespace std;

// class Demo{
//     public:
//     void show(){
//         cout << "Show No value"<<endl;
//     }

//     void show(int a){
//         cout << "Show One Value : "<< a << endl;
//     }

//     void show(int a, int b){
//         cout << "Addition of Two Values : " << a+b << endl;
//     }


// };

// inline double area (int a, int b){
//     int area = 0.5 * a * b;
//     return area;
// }

int add (int x = 5 , int y = 4){
    return x+y;
}


int main(){
    // Demo s;
    // s.show();
    // s.show(6);
    // s.show(4,6);

    // cout << "Area of triangle is : " << area(2,6);
    int c = add(7,8);
    cout << c << endl;
    cout << add();
}