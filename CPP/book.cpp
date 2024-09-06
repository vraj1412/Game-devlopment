#include<iostream>
using namespace std;
class Book{
    int bnum;
    char bname[20];
    float price , tcost;
    
    
    void total_cost(int n);

    public :

        void take_data(){
            cout <<"Enter Titel = ";
            gets(bname);

            cout <<"Enter Book Number = ";
            cin >> bnum;

            cout <<"Enter Book Price = ";
            cin >> price;
        
           
            cout<<endl;
        }
        void show_data(){
            int n;

            cout << "Titel Of Book :"<<bname<<endl;
            cout << "Book Number : "<<bnum<<endl;
            cout<<"Price Of Single Book :"<<price<<endl;
            cout << "Enter Number Of Copy = ";
            cin>>n;
               total_cost(n);
            cout<<"Total Cost = "<<tcost<<endl;
          
        }
};

void Book :: total_cost(int n){

    tcost = n * price;

    
      
};
int main(){
    Book b;

    b.take_data();
    b.show_data();

}