#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    const int NUM_MONTHS = 12;
    string name[NUM_MONTHS] = {"January","May","September","February",
                               "June","October","March","July","November",
                               "April","August","December"};
    int days[NUM_MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for(int month = 0; month < NUM_MONTHS; month++)
    {
        cout<< setw(9)<<left<< name[month]<< " has "<<days[month]<<" days.\n";
    }

    string month_days[NUM_MONTHS][NUM_MONTHS]=
                                              {{"January","31"},{"May","30"},{"September","30"},     {"February","28"},{"June","30"},{"October","31"},
                                              {"March","30"},{"July","31"},{"November","30"},
                                              {"April","30"},{"August","31"},{"December","31"}};


    for(int i=0; i<NUM_MONTHS; i++)
    {
        for(int j=0; j<NUM_MONTHS; j++)
        {
           cout<<month_days[i][j]<<endl;
        }
    }

   cout<<month_days[1][0]<<endl;

}