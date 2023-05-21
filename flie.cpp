#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class ATM
{
   int balance;

public:  
    ATM()
    {
        balance = 0;
    }

    void Option();
    void Check_Balance();
    void Withdrawl();
    void Deposit();
};

void ATM :: Option()
{
label:

    int a;
    cout << " 1. Check Balance " << endl;
    cout << " 2. Withdrwal " << endl;
    cout << " 3. Deposit " << endl;
    cout << " 4. Cancel " << endl;
    cout << endl;

    cout << " Enter your choice :" << endl;
    cin >> a;

    switch (a)
    {

    case 1:
        Check_Balance();
        break;

    case 2:
        Withdrawl();
        break;

    case 3:
        Deposit();
        break;

    case 4:
        exit(0);
        break;

    default:
        cout << " please Enter Correct choice " << endl;
    }
    goto label;
    getch();
}

void ATM ::Check_Balance()
{
    cout << "Your Available Balance is :" << balance << endl;
}

void ATM ::Withdrawl()
{
    int amount;
    cout << " Enter the amount you want to withdrawl :" << endl;
    cin >> amount;
    balance = balance - amount;
    cout << " Your Remaining Balance is :" << balance << endl;
}

void ATM ::Deposit()
{
    float dp;
    cout << "Enter the Amount you want to Deposit :" << endl;
    cin >> dp;
    balance = balance + dp;
    cout << " YOUR NEW ACCOUNT BALANCE IS :" << balance << endl;
}

int main()
{
    cout << "\t**************************************\n";

    cout << "\t\t| ATM MANAGEMENT SYSTEM |\n ";

    cout << "\t**************************************\n"<<endl;
    
    // lets make pin management

    char PIN[15] = "102345";
    char pn[15];
    cout << "ENTER YOUR PIN " << endl;
    cin >> pn;
    if (strcmp(PIN, pn) == 0)
    {
        cout << " *********** WELCOME TO  ATM MANAGEMENT SYSTEM *********** " << endl;
    }
    else
    {
        cout << "wrong PIN " << endl;
        exit(0);
    }

    char type;
    cout << " 1. Saving " << endl;
    cout << " 2. current " << endl;

    cout << " ENTER THE TYPE OF YOUR ACCOUNT :" << endl;
    cin >> type;

    if (type == 1)
    {
        cout << " ENTER THE ACTION  WANT TO PERFORM :" << endl;
    }
    else if
        (type == 2)
        {
            cout << " Invalid choice " << endl;
        }

    // create object of class
    ATM a;
    a.Option();

    return 0;
}