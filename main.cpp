#include <iostream>
using namespace std;

//function เมนูทั้งหมด
void menu_list() {

    cout << "Press 1 Restaurant " << endl;
    cout << "Press 2 Food " << endl;
    cout << "Press 3 Check bill " << endl;
    cout << "Press 0 Close Program  " << endl;

}
//function เมนู 1
void restaurant()
{
    int choice;

    cout << "- Select Restaurant -";
    cout << "Press 1 Arr Han Tam Sang Tee Noi";
    cout << "Press 2 Khao Man Kai";
    cout << "Press 3 Gueytiew";
    cout << "Press 4 Drink Shop";
    cin >> choice;

    if(choice == 1)
    {
        cout << "- Arr Han Tam Sang Tee Noi -";

    }
    else if(choice == 2)
    {
        cout << "- Khao Man Kai -";

    }
    else if(choice == 3)
    {
        cout << "- Gueytiew -";
        
    }
    else if(choice == 4)
    {
        cout << "- Drink Shop -";
        
    }
}

//function เมนู 2
void restaurant_menu1() {
    cout << "Press 1 Phat Kra Phrao Mu 50 Bath" << endl;
    cout << "Press 2 Khao phat Khai 50 Bath" << endl;
    cout << "Press 3 Phat Phong Kra Ri Thale 60 Bath" << endl;
    cout << "Press 4 Khao Khaichiao Mu Sap 50 Bath" << endl;
    cout << "Press 5 Suki Haeng Mu 50 Bath" << endl;
    cout << "Press 6 Suki Nam Thale 60 Bath" << endl;
    cout << "Press 7 Khao Plao 10 Bath" << endl;
    cout << "Press 0 backward" << endl;
}

void restaurant_menu2() {
    cout << "Press 1 Khaomankai Tom 50 Bath" << endl;
    cout << "Press 2 Khaoman Kai Thot 60 Bath" << endl;
    cout << "Press 3 Khao Kai Yang 55 Bath" << endl;
    cout << "Press 4 Khao Mu Krop 70 Bath" << endl;
    cout << "Press 5 Khao Khluk Kra Pi 50 Bath" << endl;
    cout << "Press 6 Khao Mudaeng 55 Bath" << endl;
    cout << "Press 0 backward" << endl;
}

void restaurant_menu3() {
    cout << "Press 1 Kuaitiao Nam Sai" << endl;
    cout << "Press 2 Kuaitiao Namtok" << endl;
    cout << "Press 3 Kuaitiao Tomyam" << endl;
    cout << "Press 4 Kuaitiao Yentafo" << endl;
    cout << "Press 0 backward" << endl;
}

void drink_shop_menu4() {
    cout << "Press 1 Nam Plao 10 Bath" << endl;
    cout << "Press 2 Nam Pep Si 15 Bath" << endl;
    cout << "Press 3 Namsom 15 Bath" << endl;
    cout << "Press 4 Namkhaeng Plao 5 Bath" << endl;
    cout << "Press 0 backward" << endl;
}

int main() {
 cout << "TEST TEST";
}
