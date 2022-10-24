#include <iostream>
#include <iomanip>

using namespace std;

//Global variables
const int NUM_COLS  = 4;
const int TBL1_ROWS = 3;
const int TBL2_ROWS = 4;

void printArray(const int array[][NUM_COLS], int num_rows)
{
   for(int row = 0; row < num_rows ; row ++)
   {
      for(int column = 0; column < NUM_COLS ; column++)
      {
         cout<< setw(5) <<array[row][column] << " "; 
      }
      cout<<endl;
   }
}

int main()
{

   int table1[TBL1_ROWS][NUM_COLS] = { {1,2,3,4},
                                        {5,6,7,8},
                                        {9,10,11,12}};

   int table2[TBL2_ROWS][NUM_COLS] ={{6,7,9,0},
                                      {10,12,45,5},
                                      {8,7,6,0},
                                      {1,3,5,6}};


    cout<<"The contents of table 1 are:\n";
    printArray(table1,TBL1_ROWS);

    cout<<"The contents of table 2 are:\n";
    printArray(table2,TBL2_ROWS);

 return 0;
}