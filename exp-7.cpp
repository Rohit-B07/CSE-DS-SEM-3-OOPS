#include <iostream>
using namespace std;

class Students{
    static int rollNo;
    public:
        int marks;
        string name;
        

        Students(int m , string n){
            rollNo++;
            marks = m;
            name = n;
        }

        friend void show(Students s);
};
    void show(Students s){
        cout << "RollNo : " <<s.rollNo <<endl;
        cout << "Name : " <<s.name <<endl;
        cout << "Marks : " <<s.marks <<endl;
    }
int Students::rollNo=2532000;

int main(){
    Students s1(88,"Rohit");
    show(s1);

    Students s2(78,"Sonu");
    show(s2);

    Students s3(98,"Shahil");
    show(s3);
}


