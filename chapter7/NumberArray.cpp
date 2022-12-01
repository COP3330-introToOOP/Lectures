#include <iostream>
#include <iomanip>


using namespace std;


class NumberArray
{
  private:
    double *aPtr;
    int array_size;

  public:
    NumberArray(int size, double value);
    NumberArray(const NumberArray &);
    ~NumberArray()
    {
       if(array_size>0)
         delete[]  aPtr;
    }  
    void print();
    void setValue(double value);
    NumberArray& operator=(const NumberArray &right); 
    double operator+(const NumberArray &right);
};

double NumberArray::operator+(const NumberArray &right)
{
    double sum; 
    for(int index=0;index<array_size;index++)
    {
       sum = aPtr[index] + right.aPtr[index] + sum;
    }

    return sum;
}

NumberArray& NumberArray::operator=(const NumberArray &right)
{
     if(this != &right)
     {
        if(array_size>0)
        {
            delete [] aPtr;
        }

        array_size = right.array_size;
        aPtr = new double[array_size];

        for(int i=0; i< array_size; i++)
        {
            aPtr[i] = right.aPtr[i];
        }

     }

     return *this;
}



NumberArray::NumberArray(const NumberArray &obj)
{
    array_size = obj.array_size;
    aPtr = new double[array_size];
    
    for(int index=0; index<array_size; index++)
    {
        aPtr[index] = obj.aPtr[index];
    }
}

NumberArray::NumberArray(int size1, double value)
{
    array_size = size1;
    aPtr = new double[array_size];
    setValue(value);
}

void NumberArray::setValue(double value)
{
    for(int index=0; index<array_size; index++)
    {
        aPtr[index] = value;
    }
}

void NumberArray::print()
{
    for(int index=0; index<array_size; index++)
    {
        cout<< aPtr[index] <<" ";
    }
}

int main()
{
    NumberArray first(3, 10.5);
    NumberArray second(5, 20.5);

    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"First object's values: ";
    first.print();
    cout<<"Second object's values: ";
    second.print(); 

    first = second;

    cout<<"First object's values: ";
    first.print();
    cout<<"Second object's values: ";
    second.print(); 
 
    double sum2 = first+second;    
    cout<<"Arrays SUM: "<< sum2;

}