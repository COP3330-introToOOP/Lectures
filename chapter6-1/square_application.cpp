#include <iostream>
#include <string>

using namespace std;

class Squares
{
    private:
        int length;
        int *sq;

    public:
    Squares(int len);
    ~Squares()
    {
      delete[] sq;
      cout<<"Destroy object of size "<<length<<endl; 
    }

    void print();
};

Squares::Squares(int len)
{
    length = len;
    sq = new int[length];

    for(int k=0; k<length; k++)
    {
        sq[k]=(k+1)*(k+1);
    }
    cout<<"Construct an object of size"<<length<<endl;
}

void Squares::print()
{
    for(int k=0; k<length; k++)
    {
        cout<< sq[k]<<" ";
    }
    cout<< endl;
}

void outputSquares(Squares *sqPtr)
{
    cout<<"The list of squares is: ";
    sqPtr->print();
}
int main()
{
    Squares *sqPtr = new Squares(3);
    outputSquares(sqPtr); 

    delete sqPtr;
    return 0;

} // namespace std;
