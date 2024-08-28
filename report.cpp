#include <iostream>
using namespace std;
class Report
{
    int adno, sum;
    char sname[20];
    float marks[5], avrage;

    void avg();

public:
    void take_data()
    {
        cout << "Enter Student Number = ";
        gets(sname);

        cout << "Enter Admission Number = ";
        cin >> adno;

        for (int i = 1; i <= 5; i++)
        {
            cout << "Enter " << i << " Subject Marks = ";
            cin >> marks[i];
            sum += marks[i];
        }

        cout << endl;
    }
    void show_data()
    {
        int n;

        cout << "Student Name :" << sname << endl;
        cout << "Addmision Number : " << adno << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Marks Of " << i << " Subject :" << marks[i] << endl;
        }

        cout << "Avrage Of 5 Subject =  " << avrage << endl;
        avg();
    }
};

void Report ::avg()
{

    avrage = sum / 5;
};
int main()
{
    Report b;

    b.take_data();
    b.show_data();
}