#include<iostream>
using namespace std;

class student
{
    public:
    // what is public??
    

    string name;
    int attendence;
    float total_marks;

    void calculate_percentage()
    {
        cout<<total_marks<<"%";
    }
};

// you are making a software for a bank//

class Bank_client
{
    private:

    int credit_number;
    int cvv;
    string user_name;
    string password;

    public:

     string name;

     // we use public functions to set private data .
     //private members are accessable inside class and only inside the class.
     // ****** To access stuff of an object you definetly need a public element, as private element of an object are always inaccessible.

     void set_credit_card_number(int number)
     {
        credit_number = number;
     }

     void get_creditcardnumber()
     {
        cout<<"The credit card number is "<<credit_number;
     }

     //we use get function to get the data.
     //we use set functions to set the data.
};

int main()
{
   Bank_client a,b,c;

   a.name = "shivam";

   a.set_credit_card_number(942474);
   a.get_creditcardnumber();
   
  return 0;
}