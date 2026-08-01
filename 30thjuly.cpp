#include <iostream>
using namespace std;
int x=10;
class demo{
    public:
    static int y;
    void show();

};
int demo::y=20;
void demo::show(){
    cout<<"Global x ="<<::x<<endl;
    cout<<"static y ="<<demo::y<<endl;
}
int main(){
    demo d;
    d.show();
    
}