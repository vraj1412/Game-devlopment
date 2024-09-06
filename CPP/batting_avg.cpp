#include<iostream>
using namespace std;
class BattingAvg{
    int bcode , ining , notout , run , bating_avg;
    char bname[20];
    
    
    void avg();

    public :

        void take_data(){
            cout <<"Enter Batsman Code = ";
            cin >> bcode;
            cout <<"Enter Batsman Name = ";
            cin >> bname;
            cout <<"Enter How Many inning Played by Player = ";
            cin >> ining;
            cout <<"Enter How Many Time Player Notout = ";
            cin >> notout;
            cout <<"Enter How Many Runs Hit By Player = ";
            cin >> run;

            avg();
        }
        void show_data(){
            cout << " Batsman Code :"<<bcode<<endl;
            cout << "Batsman Name : "<<bname<<endl;
            cout << "inning Played by Player : "<<ining<<endl;
            cout << "Player Notout = "<<notout<<endl;
            cout << "Runs Hit By Player = "<<run<<endl;
            cout << "Avrage Of Player =  "<<bating_avg<<endl;

        }
};

void BattingAvg :: avg(){
        bating_avg = run / (ining - notout);
        cout << endl;
};
int main(){
    BattingAvg b;

    b.take_data();
    b.show_data();

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            