#include<iostream>
using namespace std;
class Student{
    int admno;
    char sname[20];
    float eng , math , sci , total;
    
    void ctotal(){
        total = eng + math + sci;
        cout << endl;
    }

    public :

        void take_data(){
            cout <<"admin no = ";
            cin >> admno;
            cout <<"student Name = ";
            cin >> sname;
            cout <<"Eng marks = ";
            cin >> eng;
            cout <<"Math marks = ";
            cin >> math;
            cout <<"sci marks = ";
            cin >> sci;

            ctotal();
        }
        void show_data(){
            cout << "Admin No = "<<admno<<endl;
            cout << "Student Name = "<<sname<<endl;
            cout << "english marks = "<<eng<<endl;
            cout << "math marks = "<<math<<endl;
            cout << "Science marks = "<<sci<<endl;
            cout << "Total Of Subject marks = "<<total<<endl;

        }
};
int main(){
    Student s1;

    s1.take_data();
    s1.show_data();

}