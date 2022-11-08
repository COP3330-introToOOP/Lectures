#include <iostream>
using namespace std;

int main()
{
   int x = 27;
   int *ip;
   ip = &x;

   cout<<"Values of x is: ";
   cout<< x << endl;

   cout<<"Value of ip is: ";
   cout<<ip<<endl;

   cout<<"Value of *ip is: ";
   cout<< *ip <<endl;

   *ip = 90;

   cout<<"Values of x is: ";
   cout<< x << endl;

   return 0; 
} 


