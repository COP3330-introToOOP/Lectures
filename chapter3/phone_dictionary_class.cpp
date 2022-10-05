/*
                Carlos Theran
                   COP3330
    This program is an phonenumber directory                
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <cstdlib>

using namespace std;

class PhoneDict
{
private:
  string name[5];
  string id[5];
  string phone[5];
  int num_clients;
    /* data */
public:
  PhoneDict();
  ~PhoneDict();
  void set_info();
  int print_by_name();
  void edit_client_name(int position);
  void print_list();
};


PhoneDict::~PhoneDict()
{
  cout<<"Usage Memory Free"<<endl;
}

void PhoneDict::set_info()
{
    ifstream inputFile;
    int cont = 0;
    inputFile.open("agenda_phone.txt");
  
    while(!inputFile.eof())
    {
        inputFile >> id[cont];
        inputFile >> name[cont];
        inputFile >> phone[cont];

        printf("Client: %s %s %s\n",id[cont].c_str(),name[cont].c_str(),phone[cont].c_str());

        cont++;
    }
    num_clients = cont;
    inputFile.close();
    cout<<num_clients<<" clients were loaded..."<<endl;
}

int PhoneDict::print_by_name()
{
  string given_name;  
  cout<<"Write client name: ";
  cin >> given_name;
  int position = 0;
  bool found = false;
  cout<<"num_clients "<<num_clients<<endl;
  for(int i=0; i<num_clients;i++)
  {
    if(!name[i].compare(given_name))
    {
      found = true;
      position = i;
      printf("\nThe information of the client is: %s %s %s",id[i].c_str(),name[i].c_str(),phone[i].c_str());
    }
  }
  return position;
}

void PhoneDict::edit_client_name(int position)
{
  string new_name;

  int len = name[position].length();

  cout<<"\nPlease provide the new name: "<<endl;
  cin >> new_name;

  cout<<"Change name "<< name[position] << " by "<<new_name<<endl;
  name[position].replace(0,len,new_name);
}

void PhoneDict::print_list()
{
  cout<<"\nClients information: "<<endl;
  for(int i=0;i<num_clients;i++)
  {
    printf("%s %s %s\n",id[i].c_str(),name[i].c_str(),phone[i].c_str());
  }
}


//int print_by_id(string name[], string id[], string phone[], int nums_clinets);
//void edit_client_name(string name[], int position);
//void print_list(string name[], string id[], string phone[], int nums_clients);

int main()
{

  int expression = 0;
  int position = 0;
  //open the inputfile

  PhoneDict obj;
  obj.set_info();

  cout<<"\n\n*******************************************"<<endl;
  cout<<"*****"<<setw(19)<<" MENU "<<setw(19)<<"*****"<<endl;
  cout<<left<<"1."<<setw(5)<<" Find client by name. "<<endl;
  cout<<left<<"2."<<setw(5)<<" Find client by id. "<<endl;
  cout<<left<<"3."<<setw(5)<<" Find client by phone number. "<<endl;
  cout<<left<<"4."<<setw(5)<<" Edit a client's name "<<endl;
  cout<<left<<"5."<<setw(5)<<" Edit a client's phone number "<<endl;
  cout<<left<<"6."<<setw(5)<<" Quit "<<endl;
  cout<<"*******************************************\n"<<endl;

  // read the input
  cin >> expression;

  switch (expression)
  {
  case 1:
    obj.print_by_name();
    break; 
  case 2:
  //  print_by_id(name,id,phone,num_clients);
    break; 
  case 4:
      position = obj.print_by_name();
      obj.edit_client_name(position);
      obj.print_list();       
  default:
    break;
  }
  
}



int print_by_id(string name[], string id[], string phone[], int nums_clinets)
{
  string given_id;  
  cout<<"Write client's id: ";
  cin >> given_id;
  int position = 0;
  bool found = false;

  for(int i=0; i<nums_clinets;i++)
  {
    if(!id[i].compare(given_id))
    {
      found = true;
      position = i;
      printf("\nThe information of the client is: %s %s %s",id[i].c_str(),name[i].c_str(),phone[i].c_str());
    }
  }
 return position;
}

