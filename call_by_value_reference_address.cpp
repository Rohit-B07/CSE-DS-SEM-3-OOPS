#include<iostream>
#include <algorithm>
using namespace std;

void swap_call_by_value(int x , int y){
    cout << "Before swap (by value): " << x << " " << y << endl;
    swap(x,y);
    cout << "After swap (by value): " << x << " " << y << endl;
}

void swap_call_by_pointer(int *x , int *y){
    cout << "Before swap (by pointer): " << *x << " " << *y << endl;
    swap(*x,*y);
    cout << "After swap (by pointer): " << *x << " " << *y << endl;
}

void swap_call_by_reference(int &x , int &y){
    cout << "Before swap (by reference): " << x << " " << y << endl;
    swap(x,y);
    cout << "After swap (by reference): " << x << " " << y << endl;
    cout << endl;
}

int main (){
    int a,b;
    cin>>a>>b;

    swap_call_by_value(a,b);
    swap_call_by_pointer(&a,&b);
    swap_call_by_reference(a,b);
}
