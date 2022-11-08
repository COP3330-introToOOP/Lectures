#include <iostream>

using namespace std;

void display_values(const int *numbers, int size)
{
  for(int count=0; count<size; count++)
  {
    cout<< *(numbers + count)<<" ";
  }
  cout<<endl;
}

int main()
{
    const int SIZE = 6;
    const int array1[SIZE]={1,2,3,4,5,6};
    int array2[SIZE]={2,4,6,8,10,12};

    display_values(array1,SIZE);

    display_values(array2,SIZE);
    return 0;

}
