#include<iostream>
using namespace std;
class Test{
     public :
    int tcode , candidate, center;
    char description[20];
    
        void take_data(){

            cout <<"Enter Description = ";
            cin >> description;

            cout <<"Enter Exam Code = ";
            cin >> tcode;
           
            cout <<"Enter No Of candident = ";
            cin >> candidate;  
            center = candidate / (100 + 1);
        }
       
};

class t : public Test{
    public:
    
    void show_data(){
        take_data();
            cout << "Exam Code  :"<<tcode<<endl;
            cout << "Enter Description : "<<description<<endl;
            cout << "No Of candident : "<<candidate<<endl;
            cout << "No Of Center =  "<<center<<endl;

        }
       
};


int main(){
    t t1;

  t1.show_data();

}