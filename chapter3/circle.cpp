/*
            Carlos Theran
                COP3303
This program implement a Circle class
*/

#include <iostream>
#include <math.h>

using namespace  std;

class Circle
{
private:
    /* data */
    double radius;
public:
    void setRadius(int r)
    { radius = r;}

    double CalcArea()
    { return 3.14*pow(radius,2);}

    double diamter()
    {return 2*radius;}

    double perimeter()
    { return 2*3.14*radius;}
};



int main()
{
   Circle circle1, circle2;

   circle1.setRadius(5);
   circle2.setRadius(3);

   cout<<"The area of the circle1 is "<< circle1.CalcArea() <<endl;
   cout<<"The area of the circle2 is "<< circle2.CalcArea() <<endl;

   cout<<"The perimeter of the circle1 is "<< circle1.perimeter() <<endl;
   cout<<"The perimeter of the circle1 is "<< circle2.perimeter() <<endl;

   return 0;
}



