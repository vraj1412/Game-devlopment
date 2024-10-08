
#include <iostream>
using namespace std;
class Bank
{
protected:
    string name;
    long long ac_no;
    string pass;
    string ifsc;
    long long ac_bal;

public:
    Bank() {};
    Bank(string name1, long long int Ac_number, string code, long long balance, string Password1)
    {
        name = name1;
        ac_no = Ac_number;
        ifsc = code;
        ac_bal = balance;
        pass = Password1;
    }

    int check_pass(string temp)
    {
        if (temp != pass)
        {
            cout << endl;
            cout << "Invalid Input" << endl;
            return 0;
        }
        return 1;
    }

    void check_balance()
    {
        cout << endl;
        cout << endl;
        cout << "Balance In Your Account: " << ac_bal << endl;
        cout << endl;
    }

    void deposit(long long money)
    {
        if (money <= 0)
        {
            cout << endl;
            cout << endl;
            cout << "Invalid Input" << endl;
        }
        else
        {
            ac_bal += money;
            cout << endl;
            cout << endl;
            cout << "Your Money " << money << " is Succesfully Creadited In Account no " << ac_no << endl;
        }
    }

    void withdraw(long long money)
    {
        if (money >= ac_bal)
        {
            cout << "Invalid Input" << endl;
        }
        else
        {
            ac_bal -= money;
            cout << endl;
            cout << endl;
            cout << "Your Money " << money << " is Succesfully Debited In Account no " << ac_no << endl;
        }
    }
    void display()
    {
        cout << endl;
        cout << endl;
        cout << "Name :- " << name << endl;
        cout << "Account No :- " << ac_no << endl;
        cout << "IFSC code :- " << ifsc << endl;
        cout << "Balance :- " << ac_bal << endl;
    }
};
int main()
{
    Bank user[15];

    user[0] = Bank{"Vraj Kachhadiya", 300556477845, "SBI60459CO", 8550000, "1234"};    // 1
    user[1] = Bank{"Meet Radadiya", 300548556354, "SBI60459CO", 2500900, "4567"};      // 2
    user[2] = Bank{"Sumit Pavasiya", 308755647854, "SBI60459CO", 9500000, "8910"};     // 3
    user[3] = Bank{"Mansi Limbasiya", 30089715564974, "SBI60459CO", 1580000, "1112"};  // 4
    user[4] = Bank{"Divy Kachhadiya", 309795564763, "SBI60459CO", 8958000, "1314"};    // 5
    user[5] = Bank{"Harshil Kanani", 309795526435, "SBI60459CO", 6560580, "1516"};     // 6
    user[6] = Bank{"Meet Kanani", 309795586471, "SBI60459CO", 4652800, "1718"};        // 7
    user[7] = Bank{"Vraj Patoliya", 309795585412, "SBI60459CO", 6580000, "1920"};      // 8
    user[8] = Bank{"Raj Kheni", 309795415426, "SBI60459CO", 4812800, "2122"};          // 9
    user[9] = Bank{"Ayush Gajera", 309795585252, "SBI60459CO", 4812800, "2324"};       // 10
    user[10] = Bank{"Meet Kachhadiya", 301556477845, "SBI60459CO", 8550000, "2526"};   // 11
    user[11] = Bank{"Meet Kheni", 302548556354, "SBI60459CO", 2500900, "2728"};        // 12
    user[12] = Bank{"Smit Vadrodiya", 303755647854, "SBI60459CO", 9500000, "2930"};    // 13
    user[13] = Bank{"Denish Gajera", 30049715564974, "SBI60459CO", 1580000, "3132"};   // 14
    user[14] = Bank{"Tanish Gajera", 305795564763, "SBI60459CO", 895800, "3334"};      // 15
    user[15] = Bank{"Dishant Kathiriya", 306795526435, "SBI60459CO", 6565800, "3536"}; // 16

    int choice;

    do
    {
        cout << endl;
        cout << endl;
        cout << "------------Welcome To Bank------------" << endl;
        cout << "Press 1 To Check Balance." << endl;
        cout << "Press 2 For Deposit." << endl;
        cout << "Press 3 For Withdrow." << endl;
        cout << "Press 4 To Display Details." << endl;
        cout << "Press 0 For Exit." << endl;
        cout << endl;
        cout << endl;

        cout << "Enter Your Choice [0-4] = ";
        cin >> choice;

        if (choice == 0)
        {
            goto end;
        }
        else if (choice < 0 || choice > 4)
        {
            cout << "Invalid Input!" << endl;
            goto end;
        }

        int n;

        cout << "Enter User Number = ";
        cin >> n;

        if (n < 0 || n > 16)
        {
            cout << endl
                 << "Invalid User Number !" << endl
                 << " ";
            goto end;
        }
        else
        {
            string password;

            cout << "Enter Password :";
            cin >> password;

            int check = user[n - 1].check_pass(password);
            if (check == 0)
            {
                goto end;
            }
        }

        if (choice == 1)
        {
            user[n - 1].check_balance();
        }
        else if (choice == 2)
        {
            int amt;
            cout << "Enter Amount = ";
            cin >> amt;
            user[n - 1].deposit(amt);
        }
        else if (choice == 3)
        {
            int amt;
            cout << "Enter the amount : ";
            cin >> amt;
            user[n - 1].withdraw(amt);
        }
        else if (choice == 4)
        {
            user[n - 1].display();
        }

        else if (choice == 0)
        {
        end:
            cout << "Session Is Completed";
        }

    } while (choice != 0);

    return 0;
}
