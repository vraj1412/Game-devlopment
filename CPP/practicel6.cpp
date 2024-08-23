#include <iostream>
using namespace std;
int main()
{
    int n, rm, rev = 0, ori, i = 0;

    cout << "Enter Num = ";
    cin >> n;
    ori = n;

    do
    {
        rm = n % 10;
        rev = (rev * 10) + rm;
        n /= 10;

    } while (n != 0);


     cout << "Reverse Num = " << rev << endl;
    if (ori == rev)
    {
        cout << ori <<" is pelimdrom no" << endl;
    }
    else
    {
        cout<< ori << " no is not pelimdrom no";
    }
}