#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
//Global varibales
const int NUM_SECTIONS = 3,
          ROWS_IN_SECTION = 4,
          SEATS_IN_ROW =4;

 void printArray(const double array[][ROWS_IN_SECTION][SEATS_IN_ROW]) 
 {
    cout<< fixed << showpoint << setprecision(2);

    for(int section=0; section<NUM_SECTIONS; section++)
    {
        cout<<"\n\nSection"<<(section+1);
        for(int row =0;row<ROWS_IN_SECTION; row++)
        {
            cout<<"\nRow "<<(row+1)<<":";
            for(int column=0; column<SEATS_IN_ROW; column++)
            {
                cout<<setw(7)<< array[section][row][column];
            }
        }
        cout <<endl;
    }
 }        

int main()
{
    double seats[NUM_SECTIONS][ROWS_IN_SECTION][SEATS_IN_ROW] = {{{3,4,5,1},{4,5,6,5},
                                                                  {5,6,7,8},{1,5,7,8}},
                                                                 {{3,4,5,1},{4,5,6,5},
                                                                  {5,6,4,2},{9,0,2,3}},
                                                                 {{5,7,1,2},{4,5,6,7},
                                                                  {0,1,4,5},{5,4,3,2}}};

    printArray(seats);

                                                                
 return 0;
}
