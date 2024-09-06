#include<iostream>
using namespace std;
class Test{
    int tcode , candidate, center;
    char description[20];
    
    
    void calcntr();

    public :

        void take_data(){
            cout <<"Enter Description = ";
            gets(description);

            cout <<"Enter Exam Code = ";
            cin >> tcode;
           
            cout <<"Enter No Of candident = ";
            cin >> candidate;
            

            calcntr();
        }
        void show_data(){
            cout << "Exam Code  :"<<tcode<<endl;
            cout << "Enter Description : "<<description<<endl;
            cout << "No Of candident : "<<candidate<<endl;
            cout << "No Of Center =  "<<center<<endl;

        }
};

void Test :: calcntr(){
        center = candidate / (100 + 1);
        cout << endl;
};
int main(){
    Test t;

    t.take_data();
    t.show_data();

}