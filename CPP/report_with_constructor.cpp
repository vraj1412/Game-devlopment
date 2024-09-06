#include <iostream>
using namespace std;
class report
{
    int adno, sum = 0;
    char sname[20];
    float marks[5], avrage;

    void avg();

public:
    report()
    {
        cout << "Enter Student Name = ";
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
        avg();
        cout << "Avrage Of 5 Subject =  " << avrage << endl;
    }
};

void report ::avg()
{

    avrage = sum / 5;
};

int main()
{
    report r;
    r.show_data();

    return 0;
}