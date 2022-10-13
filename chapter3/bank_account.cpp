#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <fstream>

using namespace std;


class Client
{
    private:
       string name_client;
       int ssn;
       int bank_account_num;

    public:
    Client(){};
    Client(string name_client, int ssn, int account_num)
    {
      name_client = name_client;
      ssn = ssn;
      bank_account_num = account_num;
    }
    void set_ClientName(string name);
    void set_SSN(int ssn);
    void set_BankAccountNum(int account);
    string get_ClientName();
    int get_SSN();
    int get_BankAccountNum();
    void print_inf();
};

void Client::set_BankAccountNum(int account)
{
  bank_account_num = account;
}

void Client::set_ClientName(string name)
{
    name_client = name;
}

void Client::set_SSN(int ssn2)
{
   ssn = ssn2;
}

string Client::get_ClientName()
{
    return name_client;
}

int Client::get_BankAccountNum()
{
    return bank_account_num;
}

int Client::get_SSN()
{
    return ssn;
}

void Client::print_inf()
{
    printf("Bank Account: %i, Name: %s, SNN: %i\n", bank_account_num, name_client.c_str(), ssn); 
}





class BankAccount
{
    private:
       int currentBalance;
       int numberOfTransaction;
       Client client;
    public:
       BankAccount();
       ~BankAccount(){}
       BankAccount(int pCurrentBalance);
       BankAccount(int pCurrentBalance,string name_client, int ssn, int account_num);
       int get_CurrentBalance();
       int get_NumberOfTransaction();
       void bank_information();
       void deposit(int amount);
       void withdraw(int amount);
       void set_CurrentBalance(int amount);
       void set_NumberOfTransaction(int amount);
       void print_inf();

};

BankAccount::BankAccount(int pCurrentBalance,string name_client, int ssn, int account_num)
{
  currentBalance = pCurrentBalance;
  numberOfTransaction = 0;
  client.set_BankAccountNum(account_num);
  client.set_ClientName(name_client);
  client.set_SSN(ssn);
}

BankAccount::BankAccount(int pCurrentBalance)
{
  currentBalance = pCurrentBalance;
  numberOfTransaction = 0;
}

void BankAccount::deposit(int amount)
{
    currentBalance += amount;
    numberOfTransaction++;
}

void BankAccount::withdraw(int amount)
{
    if(currentBalance >= amount)
    {
        currentBalance -= amount;
    }
    else
    {
        cout<<"ERROR: Cannot withdraw" << amount << "since current balance is "<< currentBalance<<endl;
    }
    numberOfTransaction++;
}

int BankAccount::get_CurrentBalance()
{
    return currentBalance;
} 

int BankAccount::get_NumberOfTransaction()
{
    return numberOfTransaction;
}

void BankAccount::set_CurrentBalance(int amount)
{
  currentBalance = amount;
}

void BankAccount::set_NumberOfTransaction(int amount)
{
    numberOfTransaction = amount;
}

void BankAccount::print_inf()
{
  client.print_inf();  
  printf("Total number of transaction %i, final Balance %i\n",numberOfTransaction,currentBalance);
}

int main()
{
  int initialCurrentBalance;
  int expression;
  int amount;
  string answer;

  string name_client = "Carlos-Theran";
  int ssn = 14897;
  int account_num = 80954;

  cout<<"Set the initial current balance: $";
  cin >> initialCurrentBalance;

  //BankAccount BankAccount1;
  //BankAccount BankAccount2(initialCurrentBalance);
  BankAccount BankAccount2(initialCurrentBalance, name_client, ssn, account_num);

  cout<<"Do you want to do any transaction? ";
  cin >> answer;

  while(answer=="yes")
  {
    cout<<"Select one of the following options"<<endl;
    cout<<"\n\n**************************"<<endl;
    cout<<"****"<<setw(19)<<"Menu"<<setw(19)<<"*****"<<endl;
    cout<<left<<"1."<<setw(5)<<"Deposit"<<endl;
    cout<<left<<"2."<<setw(5)<<"Withdraw"<<endl;
    cout<<"**************************************\n";

    cin >> expression;

    switch (expression)
    {
    case 1:
        cout<<"Write the total amount to deposit: $";
        cin >> amount;
        BankAccount2.deposit(amount);
        break;
    
    case 2:
        cout<<"Write the total amount to withdraw: $";
        cin >> amount;
        BankAccount2.withdraw(amount);
    default:
        cout<<"The input selection is not valid"<<endl;
        break;
    }
    cout<<"Do you want to do any other transaction?";
    cin >> answer;
  }
  
  BankAccount2.print_inf();

}
