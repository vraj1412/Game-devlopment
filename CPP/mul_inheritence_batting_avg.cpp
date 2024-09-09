#include<iostream>
using namespace std;
    float bcode , ining , notout , run , bating_avg;
    char bname[20];

class Take_data{
    public :
        void take_data(){
            cout <<"Enter Batsman Code = ";
            cin >> bcode;
            cout <<"Enter Batsman Name = ";
            cin >> bname;
              
        }     
};
class avg : public Take_data{
    public:
    void take_data2(){
       cout <<"Enter How Many inning Played by Player = ";
            cin >> ining;
            cout <<"Enter How Many Time Player Notout = ";
            cin >> notout;
            cout+ <<"Enter How Many Runs Hit By Player = ";
            cin >> run;    
    }
};

class Set_data : public Take_data{
    public:
   
     void show_data(){
     take_data2();
     take_data();
      
            cout << "Batsman Code :"<<bcode<<endl;
            cout << "Batsman Name : "<<bname<<endl;
            cout << "inning Played by Player : "<<ining<<endl;
            cout << "Player Notout = "<<notout<<endl;
            cout << "Runs Hit By Player = "<<run<<endl;
             bating_avg = run / (ining - notout);
             cout << endl;
            cout << "Avrage Of Player =  "<<bating_avg<<endl;

        }
};


int main(){
    Set_data b;
    b.show_data();
}