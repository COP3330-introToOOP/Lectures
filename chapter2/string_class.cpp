/*
                    Carlos Theran
                COOP 3330 - 3:30PM to 4:45PM
    This program work with string object and its class                 
*/

#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;

int main()
{
    // contructor examples: Initialization using a string constructor
    string name("Carlos");

    //contructor examples: Initialization using overloaded operator
    string lastname = " Theran";
    string second_lastname = " Suarez";

    // Using the function append and overloaded operator
    lastname.append(second_lastname);

    string full_name = name + lastname;
    cout<<"Your lastname is: "<< lastname<<endl;
    cout<<"Your fullname is: "<<full_name<<endl; 

   // finding the lenght of a string
   cout<<"your name has "<<full_name.size()<<endl;
   cout<<"your name has "<<full_name.length()<<endl;


   // Very is the string is empty
   if(full_name.empty())
     cout<<"The string is empty"<<endl;
   else
     cout<<"The string is not empty"<<endl;

    //Accessing to a particular character of my string
    cout<<full_name[0]<<endl;
    cout<<full_name.at(1)<<endl;

    printf("The first letter of your name is: %c\n",full_name.front());
    printf("The last letter of your name is: %c\n",full_name.back());

    //inserting a string or character
    full_name.insert(2,"@");
    printf("modify name: %s\n",full_name.c_str());

    //remove a character from my string
    full_name.erase(1,1);
    printf("modify name: %s\n",full_name.c_str());

    //replace a character in a string
    full_name.replace(11,1,"@");
    printf("modify name: %s\n",full_name.c_str());


    //find a substring from given string
    full_name.find("a");
    cout<<"Te position for a is: "<<full_name.find("a")<<endl;

    //replace a character on my string given the position
    full_name.replace(16,1,"@");
    printf("modifed name: %s\n",full_name.c_str());

  return 0;
}
