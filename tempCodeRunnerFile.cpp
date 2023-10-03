#include <iostream>
using namespace std;

bool check_status = false;
int restaurant_menu, total = 0;

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
    cout << "Press 1 Phat Kra Phrao" << endl;
    cout << "Press 2 Khao phat Khai" << endl;
    cout << "Press 3 Phat Phong Kra Ri" << endl;
    cout << "Press 4 Khao Khaichiao" << endl;
    cout << "Press 5 Suki Haeng" << endl;
    cout << "Press 6 Suki Nam" << endl;
    cout << "Press 7 Khao Plao 10 Bath" << endl;
    cout << "Press 0 backward" << endl;

    int choice_restaurant_menu1;

    cout << "Please select food >> ", cin >> choice_restaurant_menu1;
    
}


void restaurant_menu2() {
    cout << "Press 1 Khaoman kai" << endl;
    cout << "Press 2 Khao Mu Krop 70 Bath" << endl;
    cout << "Press 3 Khao Khluk Kra Pi 50 Bath" << endl;
    cout << "Press 4 Khao Mudaeng 55 Bath" << endl;
    cout << "Press 0 backward" << endl;
}

void additional_menu3_4() {
    cout << "----- Special or Normal -----" << endl;
    cout << "Press 1 Special" << endl;
    cout << "Press 2 Normal" << endl;

    int choice_additional_menu3;
    cout << "Enter >> ", cin >> choice_additional_menu3;

    if(choice_additional_menu3 == 1) {
        total += 10;
    } else if(choice_additional_menu3 == 2) {
        total += 5;
    } else {
        cout << "If not selected, it will be set to Normal." << endl;
        total += 5;
    }
}

void additional_menu3_2() {
    cout << "----- Choose meat -----" << endl;
    cout << "Press 1 Mu Chin" << endl;
    cout << "Press 2 Mu Sap" << endl;
    cout << "Press 3 Nong Kai" << endl;
    cout << "Press 4 Kai Chik" << endl;

    int choice_additional_menu3;
    cout << "Enter >> ", cin >> choice_additional_menu3;

    if(choice_additional_menu3 == 1) {
        total += 15;
    } else if(choice_additional_menu3 == 2) {
        total += 10;
    } else if(choice_additional_menu3 == 3) {
        total += 15;
    } else if(choice_additional_menu3 == 4) {
        total += 10;
    }
}

void additional_menu3_1() {
    cout << "----- Choose noodles -----" << endl;
    cout << "Press 1 Sen Lek" << endl;
    cout << "Press 2 Sen Yai" << endl;
    cout << "Press 3 Sen Ma Ma" << endl;
    cout << "Press 4 Sen Mi" << endl;
    cout << "Press 0 Backward" << endl;
    total += 40;

    int choice_additional_menu3;
    cout << "Enter >> ", cin >> choice_additional_menu3;
    
    if(choice_additional_menu3 == 1) {
        total += 9;
    } else if(choice_additional_menu3 == 2) {
        total += 9;
    } else if(choice_additional_menu3 == 3) {
        total += 7;
    } else if(choice_additional_menu3 == 4) {
        total += 7;
    } else if(choice_additional_menu3 == 0) {
        total -= 40;
    } else {
        cout << "Invaild Choice" << endl;
        total -= 40;
    }
}

void restaurant_menu3() {
    cout << "Press 1 Kuaitiao Nam Sai" << endl;
    cout << "Press 2 Kuaitiao Namtok" << endl;
    cout << "Press 3 Kuaitiao Tomyam" << endl;
    cout << "Press 4 Kuaitiao Yentafo" << endl;
    cout << "Press 0 backward" << endl;

    int choice_restaurant_menu3;

    cout << "Please select food >> ", cin >> choice_restaurant_menu3;

    if(choice_restaurant_menu3 == 1) {
        additional_menu3_1();
    }
}

void drink_shop_menu4() {
    cout << "Press 1 Nam Plao 10 Bath" << endl;
    cout << "Press 2 Nam Pep Si 15 Bath" << endl;
    cout << "Press 3 Namsom 15 Bath" << endl;
    cout << "Press 4 Namkhaeng Plao 5 Bath" << endl;
    cout << "Press 0 backward" << endl;
}

void menu_list() {
    while (true) {
    int choice_menu_list;

    cout << "Press 1 Restaurant " << endl;
    cout << "Press 2 Food " << endl;
    cout << "Press 3 Check bill " << endl;
    cout << "Total >> " << total << " Bath" << endl;
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
            } else if(restaurant_menu == 2) {

            } else if(restaurant_menu == 3) {
                restaurant_menu3();
            }
        } else {
            alert_message("Please choose a restaurant first.");
        }
     }
    }
}


int main() {
    menu_list();
}
