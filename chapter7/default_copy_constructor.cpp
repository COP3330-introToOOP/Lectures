#include <iostream>

using namespace std;

class Rectangle
{
    private:
    double width;
    double lenght;

    public:
    Rectangle(){}
    Rectangle(double width, double lenght)
    {
      this->width = width;
      this->lenght = lenght;
    }
    
    double get_width();
    double get_lenght();
    void set_width(double w);
    void set_lenght(double l);
    void output();
};

double Rectangle::get_width()
{
    return width;
}

double Rectangle::get_lenght()
{
    return lenght;
}

void Rectangle::set_width(double w)
{
    width = w;
}

void Rectangle::set_lenght(double l)
{
    lenght = l;
}

void Rectangle::output()
{
    cout<<"Width is "<<width<<", "<<"Lenght is "<<lenght<<endl; 
}


int main()
{
    // Define two Rectangle object 
    Rectangle box1(10,20), box2(9,15);
    Rectangle box3;

    cout<<"box1 data:";box1.output();
    cout<<"box2 data:";box2.output();

    //Assignment
    box1 = box2;

    box1.set_width(34);

    cout<<"box1 data:";box1.output();
    cout<<"box2 data:";box2.output();
    
    box3 = box2;
    
    cout<<"box2 data:";box2.output();
    cout<<"box3 data:";box3.output();
}