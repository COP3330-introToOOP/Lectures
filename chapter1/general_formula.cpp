/*
                    Carlos Theran
                      COOP 3330 - 3:30PM to 4:45PM
    This program finds the roots of a quadratic equation                  
*/
#include <iostream> // Library is use for cin and cout
#include <math.h> // Library for math functions
#include <iomanip> // Library is use to manipulate stream manipulators (setw and setprecision)
#include <stdio.h> // Library is use for printf

using namespace std;


double general_formula(double a, double b, double c)
{
    double sol1 = 0;
    double sol2 = 0; 
    double determinant = pow(b,2) - 4*a*c;

    if(determinant >= 0)
    {
        sol1 = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
        sol2 = (-b - sqrt(pow(b,2)-4*a*c))/2*a;
        cout<< left <<"\nThe two solution for this equation are real."<<endl;
        cout<< left <<"First  solution --> "<<setw(4)<< right <<setprecision(3)<<sol1<<endl;
        cout<< left <<"Second solution --> "<<setw(4)<< right <<setprecision(3)<<sol2<<endl;   
    }   
    else
    {
        cout<<"The given quadratic equation does not have real solution, "
            "the descriminant values is "<< determinant <<endl;  
    }
    return 0;
}

void evaluation(double a, double b, double c, double x_values[], double y_values[], int leng)
{
   for(int i=0;i<=leng-1;i++)
   {
     y_values[i] = a*pow(x_values[i],2) + b*x_values[i] + c;
     cout<<"For x="<<x_values[i]<<" ; y="<<y_values[i]<<endl;
   }
}

void vertex_formula(double a, double b, double c, double vertex[])
{
  vertex[0] = -b/(2*a);
  vertex[1] = -(pow(b,2)-4*a*c)/(4*a);
}



int main()
{
   double a = 0;
   double b = 0;
   double c = 0;
   double x_values[] = {2,3,4,1,7,8};
   double y_values[] = {};
   double vertex[2] = {};
   string answer = "yes";
   string answer2 = "yes";
    
   while(!answer.compare(answer2)) 
   {
        cout<<"Please provide the coefficients of your equation: ";
        cin>>a>>b>>c;
        general_formula(a,b,c);
        evaluation(a, b, c, x_values, y_values,6);
        vertex_formula(a,  b,  c, vertex);
        printf("\nThe vertex are:(%4.f,%4.f)",(float)vertex[0],vertex[1]);
        cout<<setprecision(3)<<vertex[0]<<endl;
        cout<<"\nDo you want to keep using the application? ";
        cin >> ws;
        getline(cin,answer);
   } 
   return 0;
}