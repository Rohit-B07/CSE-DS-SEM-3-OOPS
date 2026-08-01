#include <iostream>
#include <cstdarg>
using namespace std;

// void display (int a = 10 , int b = 20){
//     cout << "a = " << a << " , b = "<<b << endl;
// }

// int main(){
//     display();
//     display(5);
//     display(5,15);
// }

// .... -> Indicates variable arguments
// va_list -> Stores the list of variable arguments
// va_start() -> Initialize the argument list
// va_arg() -> Retrives the next argument
// va_end() -> Cleans up the argument list

int sum(int count, ...){ //... 
    va_list args;
    va_start(args,count);
    int total = 0;
    for(int i = 0 ; i < count ; i++){
        total += va_arg(args , int);
    }
    va_end(args);
    return total;
}

int main(){
    cout << "SUM = " << sum(5,1,2,3,4,5) << endl;
    cout << "SUM = " << sum(5,6,7,8,9,10) << endl;
}