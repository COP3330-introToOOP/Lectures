#include <iostream>

using namespace std;

class Questionary
{
   private:
   int number_questions;
   char *correct_answer_prt;
   char *student_answer_prt;

   public:
   Questionary(){}
   Questionary(char corret_answ[], int num_quest)
   {
    number_questions = num_quest;
    correct_answer_prt = corret_answ;
    student_answer_prt = new char[number_questions];
   } 
   void student_response();
   void print_correct_answ();
   void print_student_response();
};

void Questionary::student_response()
{
    cout<<"You are requiere to answer the following "<<number_questions<<endl;

    for(int i=0;i<number_questions;i++)
    {
        cout<<"Write your answer for question #"<<i<<": ";
        cin >> *(student_answer_prt + i);
    } 
}

void Questionary::print_correct_answ()
{
    for(int i=0; i<number_questions; i++)
    {
        cout<<"Question"<<i+1<<": "<<correct_answer_prt[i]<<endl;
    }
}

void Questionary::print_student_response()
{
    for(int i=0;i<number_questions;i++)
    {
        cout<<"Question"<<i+1<<": "<<student_answer_prt[i]<<endl;
    }
}

int main()
{
    int num_quest = 3;
    char correct_answ_exam1[3] = {'a','c','d'};

    Questionary Exam1(correct_answ_exam1,num_quest);
    Questionary Exam2;

    Exam1.student_response(); 
    cout<<"The correct answer are: \n";
    Exam1.print_correct_answ();

     Exam2 = Exam1;

     Exam2.student_response();
     Exam1.print_student_response();

    return 0;
}


