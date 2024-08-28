#include<iostream>
using namespace std;
class Test{
    int fcode;
    char destination[20];
    float dis , fuel;
    
    
    void calfuel();

    public :

        void take_data(){
            cout <<"Enter destination = ";
            gets(destination);

            cout <<"Enter Flight Number = ";
            cin >> fcode;
           
            cout <<"Enter Distance = ";
            cin >> dis;

            calfuel();
            cout<<endl;
        }
        void show_data(){
            cout << "Flight Number  :"<<fcode<<endl;
            cout << "Destination : "<<destination<<endl;
            cout << "Distance : "<<dis<<endl;
            cout << "Fuel =  "<<fuel<<endl;

        }
};

void Test :: calfuel(){
      if(dis <= 1000){
        fuel = 500;
      }else if(dis >= 1000 && dis <= 2000){
        fuel = 1100;
      }else {
        fuel = 2200;
      }
};
int main(){
    Test t;

    t.take_data();
    t.show_data();

}