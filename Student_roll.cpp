#include<iostream>
using namespace std;

class Student
{
private:
    int roll1;

public:
    void setRoll1(int roll1)
    {
        this->roll1 = roll1;
    }

    void display()
    {
        cout << "Roll Number: " << this->roll1 << endl;
    }
};