#include<iostream>
#include<vector>
using namespace std;

int main(){
    // auto a = 2.5;
    // cout << sizeof(a)<<endl;
    // auto b = 5;
    // cout << sizeof(b)<<endl;
    // auto c = "Rohit";
    // cout << sizeof(c)<<endl;
    // auto d = 'A';
    // cout << sizeof(d)<<endl;

    vector <int> a;
    a.push_back(6);
    a.push_back(5);
    a.push_back(4);
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);

    for(int x : a){
        cout << x << " "<<endl;
    }
    
}
