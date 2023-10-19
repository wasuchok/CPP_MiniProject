#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct order_type {
    string name;
    int price;
    int qty;

    // เพิ่ม operator== เพื่อเปรียบเทียบแค่ name
    bool operator==(const order_type& other) const {
        return name == other.name;
    }
};

// รายการร้านอาหาร
void restaurant_list();

// ร้าน 1
void restaurant_menu1(vector<order_type>* order_list);
void additional_menu1_1(vector<order_type>* order_list, string name);
void additional_menu1_2(vector<order_type>* order_list, string name, string name2, int price);
void additional_menu1_3(vector<order_type>* order_list, string name, string name2, string name3, int price);
void additional_menu1_4(vector<order_type>& order_list, string name, string name2, string name3, string name4, int price);
// จบ

// ร้าน 2
void restaurant_menu2(vector<order_type>* order_list);
void additional_menu2_1(vector<order_type>* order_list, string name, int price);
void additional_menu2_2(vector<order_type>* order_list, string name, string name2, int price);
void additional_menu2_3(vector<order_type>& order_list, string name, string name2, string name3, int price);
// จบ

// ร้าน 3
void restaurant_menu3(vector<order_type>* order_list);
void additional_menu3_1(vector<order_type>* order_list,string name, int price);
void additional_menu3_2(vector<order_type>* order_list,string name, string name2, int price);
void additional_menu3_3(vector<order_type>* order_list,string name, string name2, string name3, int price);
void additional_menu3_4(vector<order_type>& order_list,string name, string name2, string name3, string name4, int price);

// ร้าน 4
void restaurant_menu4(vector<order_type>* order_list);
void additional_menu4_1(vector<order_type>* order_list, string name);
void additional_menu4_2(vector<order_type>* order_list, string name, string name2, int price);
void additional_menu4_3(vector<order_type>& order_list, string name, string name2, string name3, int price);

// ร้าน 5
void restaurant_menu5(vector<order_type>* order_list);
void additional_menu5_1(vector<order_type>* order_list, string name);
void additional_menu5_2(vector<order_type>* order_list, string name, string name2, int price);
void additional_menu5_3(vector<order_type>& order_list, string name, string name2, string name3, int price);

// ร้าน 6
void drink_shop_menu6(vector<order_type> *order_list);
void additional_menu6_1(vector<order_type>& order_list, string name, int price);

// func คิดเงิน
void check_bill(vector<order_type>* order_list);
void promotion(vector<order_type>* order_list);
void total_price(vector<order_type>* order_list, int total_code);
void save_file_order(vector<order_type>* order_list, int total_net);

bool check_status = false;
int restaurant_menu, total = 0;

void alert_message(string msg) {
    cout << "\n----------------------------------" << endl;
    cout << msg << endl;
    cout << "----------------------------------" << endl;
}

void menu_list(vector<order_type> *order_list) {
    while (true)
    {
        int choice_menu_list;

        cout << "\n===========================" << endl;
        cout << "Press 1 Restaurant " << endl;
        cout << "Press 2 Food " << endl;
        cout << "Press 3 Check Bill " << endl;
        cout << "Press 0 Close Program  " << endl;
        cout << "===========================" << endl;

        cout << "\nSelect Menu >> ", cin >> choice_menu_list;

        if(choice_menu_list == 0) {
            break;
        } else if(choice_menu_list == 1) {
            restaurant_list();
        } else if(choice_menu_list == 2) {
            if(check_status) {
                if(restaurant_menu == 1) {
                    restaurant_menu1(order_list);
                } else if(restaurant_menu == 2) {
                    restaurant_menu2(order_list);
                } else if(restaurant_menu == 3) {
                    restaurant_menu3(order_list);
                } else if(restaurant_menu == 4) {
                    restaurant_menu4(order_list);
                } else if(restaurant_menu == 5) {
                    restaurant_menu5(order_list);
                } else if(restaurant_menu == 6) {
                    drink_shop_menu6(order_list);
                }
            } else {
                alert_message("Please choose a Restaurant first.");
            }
        } else if(choice_menu_list == 3) {
            check_bill(order_list);
        }
    }
}

int main() {
    vector<order_type> order_list;
    menu_list(&order_list);
}

void restaurant_list()
{
    int choice_restaurant_list;
    cout << "\n=========== Restaurant ============" << endl;
    cout << "Press 1 Arr Han Tam Sang" << endl;
    cout << "Press 2 Khao Man Kai" << endl;
    cout << "Press 3 Guey Tiew" << endl;
    cout << "Press 4 Rad Na & Phat Si Ew" << endl;
    cout << "Press 5 Suki" << endl;
    cout << "Press 6 Drink Shop" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "===================================" << endl;

    cout << "\nSelect Restaurant >> ", cin >> choice_restaurant_list;

    choice_restaurant_list == 1 ?
    restaurant_menu = 1
    : choice_restaurant_list == 2 ?
    restaurant_menu = 2
    : choice_restaurant_list == 3 ?
    restaurant_menu = 3
    : choice_restaurant_list == 4 ?
    restaurant_menu = 4
    : choice_restaurant_list == 5 ?
    restaurant_menu = 5
    : choice_restaurant_list == 6 ?
    restaurant_menu = 6
    : check_status = false;

    check_status = true;
}

void restaurant_menu1(vector<order_type>* order_list)
{
    int menu;

    cout << "\n======== Arr Han Tam Sang ========" << endl;
    cout << "Press 1 Phat Kra Phrao" << endl;
    cout << "Press 2 Phat Ka Na" << endl;
    cout << "Press 3 Phat Prik Kaeng" << endl;
    cout << "Press 4 Phat Phong Kra Ri" << endl;
    cout << "Press 5 Tod Kra Tiem" << endl;
    cout << "Press 6 Khao Phat" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "==================================" << endl;
    cout << "\nSelect Menu >> ", cin >> menu;

    if(menu == 1)
    {
        additional_menu1_1(order_list, "Phat Kra Phrao");
    }
    else if(menu == 2)
    {
        additional_menu1_1(order_list, "Phat Ka Na");
    }
    else if(menu == 3)
    {
        additional_menu1_1(order_list, "Phat Prik Kaeng");
    }
    else if(menu == 4)
    {
        additional_menu1_1(order_list, "Phat Phong Kra Ri");
    }
    else if(menu == 5)
    {
        additional_menu1_1(order_list, "Tod Kra Tiem");
    }
    else if(menu == 6)
    {
        additional_menu1_1(order_list, "Khao Phat");
    }
}

void additional_menu1_1(vector<order_type>* order_list, string name)
{
    int addon;

    cout << "\n============== " << name << " ==============" << endl;
    cout << "Press 1 Muu Sab - 40 Baht" << endl;
    cout << "Press 2 Muu Chin - 40 Baht" << endl;
    cout << "Press 3 Muu Krob - 40 Baht" << endl;
    cout << "Press 4 Kai - 40 Baht" << endl;
    cout << "Press 5 Nue - 40 Baht" << endl;
    cout << "Press 6 Kung - 45 Baht" << endl;
    cout << "Press 7 Pra Muek - 45 Baht" << endl;
    cout << "Press 8 Ruem Mit - 45 Baht" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "=====================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu1_2(order_list, name, " Muu Sab", 40);
    }
    else if(addon == 2)
    {
        additional_menu1_2(order_list, name, " Muu Chin", 40);
    }
    else if(addon == 3)
    {
        additional_menu1_2(order_list, name, " Muu Krob", 40);
    }
    else if(addon == 4)
    {
        additional_menu1_2(order_list, name, " Kai", 40);
    }
    else if(addon == 5)
    {
        additional_menu1_2(order_list, name, " Nue", 40);
    }
    else if(addon == 6)
    {
        additional_menu1_2(order_list, name, " Kung", 45);
    }
    else if(addon == 7)
    {
        additional_menu1_2(order_list, name, " Pra Muek", 45);
    }
    else if(addon == 8)
    {
        additional_menu1_2(order_list, name, " Ruem Mit", 45);
    }
}

void additional_menu1_2(vector<order_type>* order_list, string name, string name2, int price)
{
    int addon;
    
    cout << "\n======== " << name << name2 << " " << price << " Baht" << " ========" << endl;
    cout << "Press 1 Khai Daw (+10 Baht)" << endl;
    cout << "Press 2 Khai Jeaw (+10 Baht)" << endl;
    cout << "Press 3 No Addon" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "======================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu1_3(order_list, name, name2, " Khai Daw", price + 10);
    }
    else if(addon == 2)
    {
        additional_menu1_3(order_list, name, name2, " Khai Jeaw", price + 10);
    }
    else if(addon == 3)
    {
        additional_menu1_3(order_list, name, name2, "", price + 0);
    }
}

void additional_menu1_3(vector<order_type>* order_list, string name, string name2, string name3, int price)
{
    int addon;
    
    cout << "\n======== " << name << name2 << name3 << " " << price << " Baht" << " ========" << endl;
    cout << "Press 1 Rad Khao" << endl;
    cout << "Press 2 Rad Khao Pi Set (+10 Baht)" << endl;
    cout << "Press 3 Kab Khao" << endl;
    cout << "Press 4 Kab Khao Pi Set (+10 Baht)" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "======================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu1_4(*order_list, name, name2, name3, " Rad Khao", price + 0);
    }
    else if(addon == 2)
    {
        additional_menu1_4(*order_list, name, name2, name3, " Rad Khao Pi Set", price + 10);
    }
    else if(addon == 3)
    {
        additional_menu1_4(*order_list, name, name2, name3, " Kab Khao", price + 0);
    }
    else if(addon == 4)
    {
        additional_menu1_4(*order_list, name, name2, name3, " Kab Khao Pi Set", price + 10);
    }
}

void additional_menu1_4(vector<order_type>& order_list, string name, string name2, string name3, string name4, int price)
{
    int qty;
    order_type order;
    order.name = name + name2 + name3 + name4;
    order.price = price;
    cout << "Quantity >> ", cin >> qty;
    total += price * qty;
    order.qty = qty;

    vector<order_type>::iterator it = find(order_list.begin(), order_list.end(), order);

    if(it != order_list.end()) {
        cout << "Found information" << order.name << " Index : " << distance(order_list.begin(), it) << endl;
        order_list[distance(order_list.begin(), it)].qty += qty;
    } else {
        order_list.push_back(order);
    }
}

void restaurant_menu2(vector<order_type>* order_list)
{
    int menu;

    cout << "\n================== Khao Man Kai ==================" << endl;
    cout << "Press 1 Khao Man Kai" << endl;
    cout << "Press 2 Khao Muu Daeng - 50 Baht" << endl;
    cout << "Press 3 Khao Muu Krob - 55 Baht" << endl;
    cout << "Press 4 Khao Muu Daeng Muu Krob - 60 Baht" << endl;
    cout << "Press 5 Khao Kluk Kra Pi - 50 Baht" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "================================================" << endl;
    cout << "\nSelect Menu >> ", cin >> menu;

    if(menu == 1)
    {
        additional_menu2_1(order_list, "Khao Man Kai", 0);
    }
    else if(menu == 2)
    {
        additional_menu2_2(order_list, "Khao", " Muu Daeng", 50);
    }
    else if(menu == 3)
    {
        additional_menu2_2(order_list, "Khao", " Muu Krob", 55);
    }
    else if(menu == 4)
    {
        additional_menu2_2(order_list, "Khao", " Muu Daeng Muu Krob", 60);
    }
    else if(menu == 5)
    {
        additional_menu2_2(order_list, "Khao", " Khluk Kra Pi", 50);
    }

}

void additional_menu2_1(vector<order_type>* order_list, string name, int price)
{
    int addon;
    cout << "\n================== " << name << " ==================" << endl;
    cout << "Press 1 Khao Man Kai Tom - 40 Baht" << endl;
    cout << "Press 2 Khao Man Kai Yang - 40 Baht" << endl;
    cout << "Press 3 Khao Man Kai Thot - 40 Baht" << endl;
    cout << "Press 4 Khao Man Kai Tom&Yang - 45 Baht" << endl;
    cout << "Press 5 Khao Man Kai Tom&Thot - 45 Baht" << endl;
    cout << "Press 6 Khao Man Kai Yang&Thot - 45 Baht" << endl;
    cout << "Press 7 Khao Man Kai Tom&Yang&Thot - 50 Baht" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "===============================================" << endl;
    cout << "\nAddon >> ", cin >> addon;
    

    if(addon == 1)
    {
        additional_menu2_2(order_list, name, " Tom", 40);
    }
    else if(addon == 2)
    {
        additional_menu2_2(order_list, name, " Yang", 40);
    }
    else if(addon == 3)
    {
        additional_menu2_2(order_list, name, " Thot", 40);
    }
    else if(addon == 4)
    {
        additional_menu2_2(order_list, name, " Tom&Yang", 45);
    }
    else if(addon == 5)
    {
        additional_menu2_2(order_list, name, " Tom&Thot", 45);
    }
    else if(addon == 6)
    {
        additional_menu2_2(order_list, name, " Yang&Thot", 45);
    }
    else if(addon == 7)
    {
        additional_menu2_2(order_list, name, " Tom&Yang&Thot", 50);
    }
}

void additional_menu2_2(vector<order_type>* order_list, string name, string name2, int price)
{
    int addon;
    cout << "\n======== " << name << name2 << " " << price << " Baht" << " ========" << endl;
    cout << "Press 1 Tham Ma Da" << endl;
    cout << "Press 2 Pi Set (+10 Baht)" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "======================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu2_3(*order_list, name, name2, "", price + 0);
    }
    else if(addon == 2)
    {
        additional_menu2_3(*order_list, name, name2, " Pi Set", price + 10);
    }
}

void additional_menu2_3(vector<order_type>& order_list, string name, string name2, string name3, int price)
{
    int qty;
    order_type order;
    order.name = name + name2 + name3;
    order.price = price;
    cout << "Quantity >> ", cin >> qty;
    total += price * qty;
    order.qty = qty;

    vector<order_type>::iterator it = find(order_list.begin(), order_list.end(), order);

    if(it != order_list.end()) {
        cout << "Found information" << order.name << " Index : " << distance(order_list.begin(), it) << endl;
        order_list[distance(order_list.begin(), it)].qty += qty;
    } else {
        order_list.push_back(order);
    }
}

void restaurant_menu3(vector<order_type>* order_list)
{
    int menu;

    cout << "\n============== Guay Tiew ==============" << endl;
    cout << "Press 1 Guay Tiew Nam Sai - 30 Baht" << endl;
    cout << "Press 2 Guay Tiew Nam Tok - 35 Baht" << endl;
    cout << "Press 3 Guay Tiew Tom Yam - 40 Baht" << endl;
    cout << "Press 4 Guay Tiew Yentafo - 40 Baht" << endl;
    cout << "Press 5 Guay Tiew Haeng - 30 Baht" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "=======================================" << endl;
    cout << "\nSelect Menu >> ", cin >> menu;

    if(menu == 1) {
        additional_menu3_1(order_list, "Guay Tiew Nam Sai", 30);
    } else if(menu == 2) {
        additional_menu3_1(order_list, "Guay Tiew Nam Tok", 35);
    } else if(menu == 3) {
        additional_menu3_1(order_list, "Guay Tiew Tom Yam", 40);
    } else if(menu == 4) {
        additional_menu3_1(order_list, "Guay Tiew Yentafo", 40);
    } else if(menu == 5) {
        additional_menu3_1(order_list, "Guay Tiew Haeng", 30);
    }
}

void additional_menu3_1(vector<order_type>* order_list, string name, int price)
{
    int addon;
    
    cout << "\n============= " << name << " " << price << " Baht" << " ===============" << endl;
    cout << "Press 1 Sen Lek (+5 Baht)" <<  endl;
    cout << "Press 2 Sen Yai (+5 Baht)" << endl;
    cout << "Press 3 Sen Mi (+5 Baht)" << endl;
    cout << "Press 4 Sen Ba Mi (+7 Baht)" << endl;
    cout << "Press 5 Sen Ma Ma (+7 Baht)" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "============================================" << endl;
    cout << "\nSelect Menu >> ", cin >> addon;
    
    if(addon == 1) {
        additional_menu3_2(order_list, name, " Sen Lek", price + 5);
    } else if(addon == 2) {
        additional_menu3_2(order_list, name, " Sen Yai", price + 5);
    } else if(addon == 3) {
        additional_menu3_2(order_list, name, " Sen Mi", price + 5);
    } else if(addon == 4) {
        additional_menu3_2(order_list, name, " Sen Ba Mi", price + 7);
    } else if(addon == 5) {
        additional_menu3_2(order_list, name, " Sen Ma Ma", price + 7);
    }
}

void additional_menu3_2(vector<order_type>* order_list, string name, string name2, int price)
{
    int addon;

    cout << "\n================= " << name << name2 << " " << price << " Baht" << " ===================" << endl;
    cout << "Press 1 Muu Chin (+10 Baht)" << endl;
    cout << "Press 2 Muu Sab (+10 Baht)" << endl;
    cout << "Press 3 Nong Kai (+15 Baht)" << endl;
    cout << "Press 4 Kai Chek (+10 Baht)" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "============================================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1) {
        additional_menu3_3(order_list, name, name2, " Muu Chin", price + 10);
    } else if(addon == 2) {
        additional_menu3_3(order_list, name, name2, " Muu Sab", price + 10);
    } else if(addon == 3) {
        additional_menu3_3(order_list, name, name2, " Nong Kai", price + 15);
    } else if(addon == 4) {
        additional_menu3_3(order_list, name, name2, " Kai Chek", price + 10);
    }
}

void additional_menu3_3(vector<order_type>* order_list, string name, string name2, string name3, int price)
{
    int addon;

    cout << "\n========== " << name << name2 << name3 << " " << price << " Baht" << " ============" << endl;
    cout << "Press 1 Tham Ma Da" << endl;
    cout << "Press 2 Pi set (+5 Baht)" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "=========================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1) {
        additional_menu3_4(*order_list, name, name2, name3, "", price + 5);
    } else if(addon == 2) {
        additional_menu3_4(*order_list, name, name2, name3, " Pi set", price);
    }
}

void additional_menu3_4(vector<order_type>& order_list, string name, string name2, string name3, string name4, int price) {
    int qty;
    order_type order;
    order.name = name + name2 + name3 + name4;
    order.price = price;
    cout << "Quantity >> ", cin >> qty;
    total += price * qty;
    order.qty = qty;

    vector<order_type>::iterator it = find(order_list.begin(), order_list.end(), order);

    if(it != order_list.end()) {
        cout << "Found information" << order.name << " Index : " << distance(order_list.begin(), it) << endl;
        order_list[distance(order_list.begin(), it)].qty += qty;
    } else {
        order_list.push_back(order);
    }
}

void restaurant_menu4(vector<order_type>* order_list)
{
    int menu;

    cout << "\n======== Rad Na & Phat Si Ew ========" << endl;
    cout << "Press 1 Rad Na" << endl;
    cout << "Press 2 Phat Si Ew" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "=====================================" << endl;
    cout << "\nSelect Menu >> ", cin >> menu;

    if(menu == 1)
    {
        additional_menu4_1(order_list, "Rad Na");
    }
    else if(menu == 2)
    {
        additional_menu4_1(order_list, "Phat Si Ew");
    }
}

void additional_menu4_1(vector<order_type>* order_list, string name)
{
    int addon;

    cout << "\n============= " << name << " =============" << endl;
    cout << "Press 1 Sen Lek - 45 Baht" << endl;
    cout << "Press 2 Sen Yai - 45 Baht" << endl;
    cout << "Press 3 Sen Mi - 45 Baht" << endl;
    cout << "Press 4 Sen Mi Krob - 50 Baht" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "====================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu4_2(order_list, name, " Sen Lek", 45);
    }
    else if(addon == 2)
    {
        additional_menu4_2(order_list, name, " Sen Yai", 45);
    }
    else if(addon == 3)
    {
        additional_menu4_2(order_list, name, " Sen Mi", 45);
    }
    else if(addon == 4)
    {
        additional_menu4_2(order_list, name, " Sen Mi Krob", 50);
    }
}

void additional_menu4_2(vector<order_type>* order_list, string name, string name2, int price)
{
    int addon;
    
    cout << "\n======== " << name << name2 << " " << price << " Baht" << " ========" << endl;
    cout << "Press 1 Tham Ma Da" << endl;
    cout << "Press 2 Pi Set (+5 Baht)" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "======================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu4_3(*order_list, name, name2, "", price + 0);
    }
    else if(addon == 2)
    {
        additional_menu4_3(*order_list, name, name2, " Pi Set", price + 5);
    }
}

void additional_menu4_3(vector<order_type>& order_list, string name, string name2, string name3, int price)
{
    int qty;
    order_type order;
    order.name = name + name2 + name3;
    order.price = price;
    cout << "Quantity >> ", cin >> qty;
    total += price * qty;
    order.qty = qty;

    vector<order_type>::iterator it = find(order_list.begin(), order_list.end(), order);

    if(it != order_list.end()) {
        cout << "Found information" << order.name << " Index : " << distance(order_list.begin(), it) << endl;
        order_list[distance(order_list.begin(), it)].qty += qty;
    } else {
        order_list.push_back(order);
    }
}

void restaurant_menu5(vector<order_type>* order_list)
{
    int menu;

    cout << "\n================ Suki ================" << endl;
    cout << "Press 1 Suki Nam" << endl;
    cout << "Press 2 Suki Haeng" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "==================================" << endl;
    cout << "\nSelect Menu >> ", cin >> menu;

    if(menu == 1)
    {
        additional_menu5_1(order_list, "Suki Nam");
    }
    else if(menu == 2)
    {
        additional_menu5_1(order_list, "Suki Haeng");
    }
}

void additional_menu5_1(vector<order_type>* order_list, string name)
{
    int addon;

    cout << "\n============== " << name << " ==============" << endl;
    cout << "Press 1 Muu - 40 Baht" << endl;
    cout << "Press 2 Kai - 40 Baht" << endl;
    cout << "Press 3 Kung - 45 Baht" << endl;
    cout << "Press 4 Pra Muek - 45 Baht" << endl;
    cout << "Press 5 Ta lay - 45 Baht" << endl;
    cout << "Press 6 Ruem Mit - 50 Baht" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "====================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu5_2(order_list, name, " Muu", 40);
    }
    else if(addon == 2)
    {
        additional_menu5_2(order_list, name, " Kai", 40);
    }
    else if(addon == 3)
    {
        additional_menu5_2(order_list, name, " Kung", 45);
    }
    else if(addon == 4)
    {
        additional_menu5_2(order_list, name, " Pra Muek", 45);
    }
    else if(addon == 5)
    {
        additional_menu5_2(order_list, name, " Ta lay", 45);
    }
    else if(addon == 6)
    {
        additional_menu5_2(order_list, name, " Ruem Mit", 50);
    }
}

void additional_menu5_2(vector<order_type>* order_list, string name, string name2, int price)
{
    int addon;
    
    cout << "\n======== " << name << name2 << " " << price << " Baht" << " ========" << endl;
    cout << "Press 1 Tham Ma Da" << endl;
    cout << "Press 2 Pi Set (+5 Baht)" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "======================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu5_3(*order_list, name, name2, "", price + 0);
    }
    else if(addon == 2)
    {
        additional_menu5_3(*order_list, name, name2, " Pi Set", price + 5);
    }
}

void additional_menu5_3(vector<order_type>& order_list, string name, string name2, string name3, int price)
{
    int qty;
    order_type order;
    order.name = name + name2 + name3;
    order.price = price;
    cout << "Quantity >> ", cin >> qty;
    total += price * qty;
    order.qty = qty;

    vector<order_type>::iterator it = find(order_list.begin(), order_list.end(), order);

    if(it != order_list.end()) {
        cout << "Found information" << order.name << " Index : " << distance(order_list.begin(), it) << endl;
        order_list[distance(order_list.begin(), it)].qty += qty;
    } else {
        order_list.push_back(order);
    }
}

void drink_shop_menu6(vector<order_type> *order_list)
{
    int menu;

    cout << "\n============ Drink Shop ============" << endl;
    cout << "Press 1 Nam Plao - 10 Baht" << endl;
    cout << "Press 2 Nam Coke - 15 Baht" << endl;
    cout << "Press 3 Nam Pep Si - 15 Baht" << endl;
    cout << "Press 4 Nam Keaw - 15 Baht" << endl;
    cout << "Press 5 Nam Daeng - 15 Baht" << endl;
    cout << "Press 6 Nam Sprite - 15 Baht" << endl;
    cout << "Press 7 Nam Kaeng Plao - 5 Baht" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "=====================================" << endl;
    cout << "\nSelect Menu >> ", cin >> menu;

    if(menu == 1) {
        additional_menu6_1(*order_list, "Nam Plao", 10);
    } else if(menu == 2) {
        additional_menu6_1(*order_list, "Nam Coke", 15);
    } else if(menu == 3) {
        additional_menu6_1(*order_list, "Nam Pep Si", 15);
    } else if(menu == 4) {
        additional_menu6_1(*order_list, "Nam Keaw", 15);
    } else if(menu == 5) {
        additional_menu6_1(*order_list, "Nam Daeng", 15);
    } else if(menu == 6) {
        additional_menu6_1(*order_list, "Nam Sprite", 15);
    } else if(menu == 7) {
        additional_menu6_1(*order_list, "Nam Kaeng Plao", 5);
    }
}

void additional_menu6_1(vector<order_type>& order_list, string name, int price)
{
    int qty;
    order_type order;
    order.name = name;
    order.price = price;
    cout << "Quantity >> ", cin >> qty;
    total += price * qty;
    order.qty = qty;

    vector<order_type>::iterator it = find(order_list.begin(), order_list.end(), order);

    if(it != order_list.end()) {
        cout << "Found information" << order.name << " Index : " << distance(order_list.begin(), it) << endl;
        order_list[distance(order_list.begin(), it)].qty += qty;
    } else {
        order_list.push_back(order);
    }
}

void check_bill(vector<order_type>* order_list) {
    int choice, promotion_code, item_total;

    cout << "\n============================ Check Bill ============================" << endl;
    for (const order_type& item : *order_list)
    {
        item_total = item.price * item.qty;
        cout << item.name << " : " << item.price << " Baht" << endl;
        cout << "Quantity : " << item.qty << endl;
        cout << "Total : " << item_total << endl << endl;
    }
    cout << ">> Total Price : " << total << " Baht <<" << endl;

    cout << "\nPress 1 Pay" << endl;
    cout << "Press 2 Promotion Code" << endl;
    cout << "Press 3 Cancel Order" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "====================================================================" << endl;
    cout << "\nPress >> ", cin >> choice;

    if(choice == 1)
    {
        cout << "\n================== Confirm Order ==================" << endl;
        total_price(order_list, total);
        
    }
    else if(choice == 2)
    {
        promotion(order_list);
    }
    else if(choice == 3)
    {
        int choice2;

        cout << "\n===================== Confirm to Cancel Order! =====================" << endl;
        for (const order_type& item : *order_list)
        {
            item_total = item.price * item.qty;
            cout << item.name << " : " << item.price << " Baht" << endl;
            cout << "Quantity : " << item.qty << endl;
            cout << "Total : " << item_total << endl << endl;
        }
        cout << "Press 1 Confirm to Cancel" << endl;
        cout << "<- Press Anything Number to Back" << endl;
        cout << "====================================================================" << endl;
        cout << "\nPress >> ", cin >> choice2;

        if(choice2 == 1)
        {
            cout << "\n>> Order Canceled <<" << endl;

            total = 0;
            order_list->clear();
        }
        else
        {
            check_bill(order_list);
        }
    }
}

void promotion(vector<order_type>* order_list)
{
    int choice2, discout, total_code;
    string promotion_code;

    cout << "\n============ Promotion ============" << endl;
    cout << "<- Press 0 to Back" << endl;
    cout << "Promotion Code >> ", cin >> promotion_code;
    cout << "===================================" << endl;

    if(promotion_code == "dc10")
    {
        discout = total * 10 / 100;
        total_code = total - discout;

        cout << "\n=========== Discout 10% ===========" << endl;
        total_price(order_list, total_code);
    }
    else if(promotion_code == "dc25")
    {
        discout = total * 25 / 100;
        total_code = total - discout;

        cout << "\n=========== Discout 25% ===========" << endl;
        total_price(order_list, total_code);
    }
    else if(promotion_code == "dc50")
    {
        discout = total * 50 / 100;
        total_code = total - discout;

        cout << "\n=========== Discout 50% ===========" << endl;
        total_price(order_list, total_code);
    }
    else if(promotion_code == "0")
    {
        check_bill(order_list);
    }
    else
    {
        cout << "Invalid Code!" << endl;
        promotion(order_list);
    }
}

void total_price(vector<order_type>* order_list, int total_code)
{
    int choice;

    cout << ">> Total Price : " << total_code << " <<" << endl;
    cout << "KBANK - 0862105192" << endl;

    cout << "\nPress 1 Payment Complete" << endl;
    cout << "<- Press Anything Number to Back" << endl;
    cout << "===================================" << endl;
    cout << "\nPress >> ", cin >> choice;

    if(choice == 1)
    {
        cout << "\n>> Cooking. . . <<" << endl;
        save_file_order(order_list, total_code);
        total = 0;
        order_list->clear();
    }
    else
    {
        check_bill(order_list);
    }
}

string generateUniqueFilename()
{
    string prefix = "ordered_";
    string extension = ".txt";

    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);
    char timestamp[20];
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d_%H-%M-%S", localTime);

    string uniqueFilename = prefix + timestamp + extension;

    return uniqueFilename;
}

void save_file_order(vector<order_type>* order_list, int total_net)
{
    int item_total;

    string filename = generateUniqueFilename();
    ofstream outputFile(filename);
    if (outputFile.is_open())
    {
        outputFile << "=========================== Ordered Lists =========================";
        for (const order_type& item : *order_list)
        {
            item_total = item.price * item.qty;
            outputFile << endl << item.name << " : " << item.price << " Baht" << endl;
            outputFile << "Quantity : " << item.qty << endl;
            outputFile << "Total : " << item_total << endl;
        }
        outputFile << "===================================================================" << endl << endl;
        outputFile << "\t\t\t\t\t>> Total Price : " << total_net << " Baht <<";

        outputFile.close();
    }
}