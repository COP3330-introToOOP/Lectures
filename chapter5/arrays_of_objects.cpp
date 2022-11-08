/*
                COP 3330 - OOP
                Carlos Theran  
        This code shows how to create arrays of objects and arrays of structs        
*/


#include <iostream>
#include <iomanip>
#include "../chapter3-1/BankAccount.h"

//Gobal variables
const int NUM_MACHINE = 3;
const int NUM_ACCOUNT = 3;

using namespace std;

struct Machine
{
    string machine_id;
    string location;

    Machine(string id, string loct)
    {
      machine_id = id;
     location = loct;  
    }
};

int return_index_machine(string city, const Machine M[])
{
    int index = -1;

    for(int i=0; i< NUM_MACHINE; i++)
    {
       if(city == M[i].location)
       {
         index = i;
         break;
       }
    }
    return index;
}

int return_index_BankAccount(int num_account, BankAccount banks[])
{
    int index = -1;

    for(int i=0; i< NUM_ACCOUNT; i++)
    {
      if(num_account == banks[i].get_AccountNum())
      {
        index = i;
        break;
      }
    }

    if(index == -1)
    {
        cout<<"Selected num_account does not exits."<<endl;
    }
    return index;
}

void print_machine_inf(const Machine &M)
{
  printf("Local information: Machine- %s, location- %s\n",M.machine_id.c_str(),M.location.c_str());
}




int main()
{
  string answer;
  string city;
  int machine_index, bank_index;
  int bank_account; 
  int expression;
  double amount;

    Machine machine[NUM_MACHINE] = { Machine("324-09-87","Tallahassee"),
                                    Machine("174-02-65","Orlando"),
                                    Machine("451-03-41","Gainesville")
                                    };


    BankAccount b_account[NUM_ACCOUNT];

    b_account[0].set_BankFullInfo(5000,"Michael-Klaim",3456,1234);
    b_account[1].set_BankFullInfo(2000,"Michael-Klaim",3456,3215);
    b_account[2].set_BankFullInfo(400,"Michael-Klaim",3456,5467);


    cout<<"Do you want to do any transaction?";
    cin >> answer;

    if(answer == "yes")
    {
        cout<<"Select the city for the transaction ";
        cin >> city;
        machine_index = return_index_machine(city,machine);
        cout<<"Type Bank Account for transaction: ";
        cin >> bank_account;
        bank_index = return_index_BankAccount(bank_account, b_account);
    }

    while(answer == "yes")
    {
        cout<<"Select one of the following options"<<endl;
        cout<<"\n\n *********************************"<<endl;
        cout<<"****"<<setw(19)<<"Menu"<<setw(19)<<"*****"<<endl;
        cout<<left<<"1."<<setw(5)<<"Deposit"<<endl;
        cout<<left<<"2."<<setw(5)<<"withdraw"<<endl;
        cout<<"***********************************\n"<<endl;


        cin >> expression;
        switch (expression)
        {
        case 1:
            cout<<"Write the total amount to deposit: $";
            cin >> amount;
            b_account[bank_index].deposit(amount);
            break;
        case 2:
            cout<<"Write the total amount to withdraw: $";
            cin >> amount;
            b_account[bank_index].withdraw(amount);
            break;
        default:
            cout<<"Do you wnat to do nay other transaction?: ";
            break;
        }
        cout<<"Do you wnat to do any other transaction? ";
        cin >> answer;
    }


  print_machine_inf(machine[machine_index]);
  b_account[bank_index].print_inf();
  return 0;
}


