                            // Dyanmic initialization of objects ......//
// Concept of simple and compound interest....
//This program follows the concept of dynamic initializaton of objects and also shows the power of simple and compound interest.....



#include <iostream>
using namespace std;

class Bank
{
    int principal;
    int years;
    float interestValue;
    float returnValue;

public:
    Bank() {}
    Bank(int p, int y, float r);
    Bank(int p, int y, int r);
    void show();
    void show1();
};

Bank ::Bank(int p, int y, float r)
{
    principal = p;
    years = y;
    interestValue = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestValue);
    }
}

Bank ::Bank(int p, int y, int r)
{

    principal = p;
    years = y;
    interestValue = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestValue);
    }
}
//this function to print in plural years....

void Bank ::show()
{
   cout << "Your Amount rs:" << principal << " is compounded by rs:" << returnValue << " in " << years << " years" << endl;
}
//this function is to print in singular year...

void Bank ::show1()
{
    cout << "Your Amount rs:" << principal << " is compounded by rs:" << returnValue << " in " << years << " year" << endl;
}
//driver  function main....

int main()
{
    //object of  class bank is created....
    Bank b1, b2, b3;
    int p, y;
    float r;
    int R; // percentage

    // here (r) is interest rate  and (R) is percentage....

    cout << "Enter amount time and interest rate: " << endl;
    cin >> p >> y >> r;
    b1 = Bank(p, y, r);

    // this logic is for singular and plural
    //  (if year is 1 then show1 func is executed else show() is executed.....

    if (y == 1)
    {
        b1.show1();
    }
    else
    {
        b1.show();
    }

    // another object for percentage:
    cout << "Enter amount time and interest percentage: " << endl;
    cin >> p >> y >> R;
    b2 = Bank(p, y, R);
    // this logic is for singular and plural...

    if (y == 1)
    {
        b2.show1();
    }
    else
    {
        b2.show();
    }

    return 0;
}