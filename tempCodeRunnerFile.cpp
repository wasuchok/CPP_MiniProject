#include <iostream>
using namespace std;

bool check_status = false;
int restaurant_menu;

void alert_message(string msg) {
    cout << "------------------------------" << endl;
    cout << msg << endl;
    cout << "------------------------------" << endl;
}

void restaurant_list() {
    int choice_restaurant_list;
    cout << "- Select Restaurant -" << endl;
    cout << "Press 1 Arr Han Tam Sang Tee Noi" << endl;
    cout << "Press 2 Khao Man Kai" << endl;
    cout << "Press 3 Gueytiew" << endl;
    cout << "Press 4 Drink Shop" << endl;

    cout << "Please select the desired restaurant >> ", cin >> choice_restaurant_list;

    choice_restaurant_list == 1 ?
    restaurant_menu = 1
    : choice_restaurant_list == 2 ?
    restaurant_menu = 2
    : choice_restaurant_list == 3 ?
    restaurant_menu = 3
    : choice_restaurant_list == 4 ?
    restaurant_menu = 4
    : check_status = false;

    check_status = true;
}

void restaurant_menu1() {
    cout << "Press 1 Phat Kra Phrao Mu 50 Bath" << endl;
    cout << "Press 2 Khao phat Khai 50 Bath" << endl;
    cout << "Press 3 Phat Phong Kra Ri Thale 60 Bath" << endl;
    cout << "Press 4 Khao Khaichiao Mu Sap 50 Bath" << endl;
    cout << "Press 5 Suki Haeng Mu 50 Bath" << endl;
    cout << "Press 6 Suki Nam Thale 60 Bath" << endl;
    cout << "Press 7 Khao Plao 10 Bath" << endl;
    cout << "Press 0 backward" << endl;

    int choice_restaurant_menu1;

    cout << "Please select food >> ", cin >> choice_restaurant_menu1;

    
}


void menu_list() {
    while (true) {
    int choice_menu_list;

    cout << "Press 1 Restaurant " << endl;
    cout << "Press 2 Food " << endl;
    cout << "Press 3 Check bill " << endl;
    cout << "Press 0 Close Program  " << endl;

    cout << "Please select menu >> ", cin >> choice_menu_list;

    if(choice_menu_list == 0) {
        break;
    } else if(choice_menu_list == 1) {
        restaurant_list();
    } else if(choice_menu_list == 2) {
        if(check_status) {
            if(restaurant_menu == 1) {
                restaurant_menu1();
            }
        } else {
            alert_message("Please choose a restaurant first.");
        }
     }
    }
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
    menu_list();
}
