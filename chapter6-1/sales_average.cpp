#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
  double *sales = nullptr;   // dynamically allocate an array
  double total = 0.0;
  double average;
  int numDays;

  cout<<"How many days of sales do you wish to process?";
  cin >> numDays;

  // Dynamically allocate an array large enough to hold that many days of sales

  sales = new double[numDays];

  cout<<"Enter the sales below.\n";
  for(int count=0;count<numDays; count++)
  {
    cout<<" Day "<<(count+1)<<":";
    cin >> sales[count];
  }
  
  for(int count=0;count<numDays;count++)
  {
    total += sales[count];
  }

  average = total/numDays;

  cout<<setprecision(2)<<fixed<<showpoint;
  cout<<"\n\nTotal sales: $"<<total<<endl;
  cout<<"Average sales: $"<<average<<endl;
 //Free dynamically allocated memory

  delete[] sales;
  sales = nullptr;
  return 0;

} 
