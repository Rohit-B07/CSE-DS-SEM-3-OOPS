// Write a program to pass objects as arguments and return objects from function to perform operations on user defined data

#include <iostream>
using namespace std;

class Point {
public:
    int x, y;
    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }
};

Point addPoints(Point p1, Point p2) {
    return Point(p1.x + p2.x, p1.y + p2.y);
}

void display(Point p) {
    cout << "Point: (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    Point p1(a, b);
    Point p2(c, d);

    Point result = addPoints(p1, p2);
    display(result);

    return 0;
}
