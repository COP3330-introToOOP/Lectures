#include <iostream>

using namespace std;

int main()
{
    int *ip;
    int arr[]={1, 4, 31, 67, 8, 64};

    ip=arr;

    for(int x=0; x<6; x++)
    {
      cout<< *ip << endl;
      ip++;
    }
    return 0;
}