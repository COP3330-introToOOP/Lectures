#include <iostream>
#include <math.h>


using namespace std;

class Rectangle
{
private:
    double length;
    double width;
public:
    Rectangle();
    Rectangle(double len, double width);
    ~Rectangle();
    double rectangle_perimeter();
    double rectangle_area();
    double get_width();
    double get_length();
    void set_width(double wit);
    void set_length(double len);

};

Rectangle::Rectangle(double len, double width)
{
    length = len;
    width = width;
}

Rectangle::~Rectangle()
{
    cout<<"Cleaning Memory"<<endl;
}

double Rectangle::rectangle_perimeter()
{
  return (2*length+2*width);
}

double Rectangle::rectangle_area()
{
   return length*width; 
}

double Rectangle::get_width()
{
  return width;
}

double Rectangle::get_length()
{
  return length; 
}

void Rectangle::set_width(double width)
{
  width=width;
}

void Rectangle::set_length(double len)
{
  length=len;
}


class Carpet
{
    private:
      double pricePerYad;
      Rectangle size;

    public:
    Carpet();
    ~Carpet();
    void setPricePerYd(double p);
    void setDimention(double len, double wid);
    double getTotalPrice();
};

void Carpet::setPricePerYd(double p)
{
    pricePerYad = p;
}

void Carpet::setDimention(double len, double wid)
{
    size.set_length(len);
    size.set_width(wid);
}

double Carpet::getTotalPrice()
{
    return size.rectangle_area()*pricePerYad;
}


void display_rectangle_info(Rectangle r)
{
  cout<<"Length = "<< r.get_length()<<endl;
  cout<<"Width = "<< r.get_width()<<endl;
  cout<<"Area = "<< r.rectangle_area()<<endl;
}


int main()
{
    Rectangle rect(10,34);
    display_rectangle_info(rect);
    return 0;
}