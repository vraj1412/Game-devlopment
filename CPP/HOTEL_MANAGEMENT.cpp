#include <iostream>
using namespace std;
class hotel
{
public:
     int p[25];
     string i[50];
     hotel()
     {
          i[0] = "Manchuriyan";
          i[1] = "Veg-65";
          i[2] = "Garlic-ball";
          i[3] = "Chaines-Bhel";
          i[4] = "Panir-Tika";
          i[5] = "Dosa";
          i[6] = "Maisur";
          i[7] = "Gotalo";
          i[8] = "Mendu-Vada";
          i[9] = "Idli";
          i[10] = "7-chesee";
          i[11] = "Mix-Veg";
          i[12] = "Margrita";
          i[13] = "Paneer Tanduri";
          i[14] = "Onion Pizza";
          i[15] = "Kaju Carry";
          i[16] = "Paneer Masala";
          i[17] = "Paneer Tanduri";
          i[18] = "Veg Paneer";
          i[19] = "Aloo Gobhi";
          i[20] = "Mazza";
          i[21] = "Cock";
          i[22] = "Sprit";
          i[23] = "Butter-Milk";
          i[24] = "Thumsup";
          i[25] = "Sosyo";

          p[0] = 150;
          p[1] = 120;
          p[2] = 150;
          p[3] = 160;
          p[4] = 140;
          p[5] = 50;
          p[6] = 150;
          p[7] = 250;
          p[8] = 100;
          p[9] = 100;
          p[10] = 200;
          p[11] = 250;
          p[12] = 240;
          p[13] = 250;
          p[14] = 230;
          p[15] = 180;
          p[16] = 200;
          p[17] = 200;
          p[18] = 220;
          p[19] = 200;
          p[20] = 25;
          p[21] = 25;
          p[22] = 25;
          p[23] = 25;
          p[24] = 25;
          p[25] = 25;
     }
     void menu()
     {
          cout << "----------------| Welcome To Maharaja Hotel|----------------" << endl;
          cout << "----------------|         Chainies         |----------------" << endl;
          cout << "          01    Manchurian           150" << endl;
          cout << "          02    Veg-65               120" << endl;
          cout << "          03    Garlic-ball          150" << endl;
          cout << "          04    Chaines-Bhel         160" << endl;
          cout << "          05    Panir-Tika           140" << endl;

          cout << "----------------|       South Indian       |----------------" << endl;

          cout << "          06    Dosa                  50" << endl;
          cout << "          07    Maisur               150" << endl;
          cout << "          08    Gotalo               250" << endl;
          cout << "          09    Mendu-Vada           100" << endl;
          cout << "          10    Idli                 100" << endl;

          cout << "----------------|          Pizza          |----------------" << endl;

          cout << "          11    7-chesee             200" << endl;
          cout << "          12    Mix-Veg              250" << endl;
          cout << "          13    Margrita             240" << endl;
          cout << "          14    Paneer Tanduri       250" << endl;
          cout << "          15    Onion Pizza          230" << endl;

          cout << "----------------|         Panjabi         |----------------" << endl;

          cout << "          16    Kaju Carry           180" << endl;
          cout << "          17    Paneer Masala        200" << endl;
          cout << "          18    Paneer Tanduri       200" << endl;
          cout << "          19    Veg Paneer           220" << endl;
          cout << "          20    Aloo Gobhi           200" << endl;

          cout << "----------------|         Drinks         |----------------" << endl;

          cout << "          21    Mazza                 25" << endl;
          cout << "          22    Cock                  25" << endl;
          cout << "          23    Sprit                 25" << endl;
          cout << "          24    Butter-Milk           25" << endl;
          cout << "          25    Thumsup               25" << endl;
          cout << "          26    Sosyo                 25" << endl;
     }
     
};
int main()
{
     
     return 0;
}