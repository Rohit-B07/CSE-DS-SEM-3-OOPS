#include <iostream>
using namespace std;
class sumNum{
   private : 
    int a;
    int b;
    
    public:
    void inputdata(){
        cin>>a;
        cin>>b;
        
    }
    
    void outputdata(){
        cout<<"Sum of two numbers is : ";
        cout<<a<<" "<<"+"<<" "<<b<< " " << "=" << " "<<a+b;
    }
};

int main() {
    sumNum n1;
    n1.inputdata();
    n1.outputdata();
    return 0;
    
}
