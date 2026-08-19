#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    int length,width;
    public:
    
    void getInfo(int x,int y);
    int area(); //declaration inside
 
};
   void Rectangle::getInfo(int x,int y){
       length=x;
       width=y;
   }
   
   int Rectangle::area(){
       return length*width; //logic outside
   }

int main(){
    int x, y;
    cin>>x>>y;
    Rectangle r;
    r.getInfo(x,y);
    cout<<r.area();
}