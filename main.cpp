#include <iostream>
#include <iomanip>
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

// ร้าน 1
void restaurant_menu1(vector<order_type>* order_list);
void additional_menu1_1(vector<order_type>* order_list, int menu1);
void additional_menu1_2(vector<order_type>* order_list, string name, int price);
void additional_menu1_3(vector<order_type>* order_list, string name, string name2, int price);
void additional_menu1_4(vector<order_type>* order_list, string name, string name2, string name3, int price);
void additional_menu1_5(vector<order_type>& order_list, string name, string name2, string name3, string name4, int price);
// จบ

// ร้าน 2
void additional_menu2_1(vector<order_type>* order_list, string name, int price);
void additional_menu2_2(vector<order_type>* order_list, string name, string name2, int price);
void additional_menu2_3(vector<order_type>& order_list, string name, string name2, string name3, int price);
// จบ


void check_bill(vector<order_type>* order_list);
void total_price(vector<order_type>* order_list, int total_code);
void save_file_order(vector<order_type>* order_list);


bool check_status = false;
int restaurant_menu, total = 0;

void alert_message(string msg) {
    cout << "------------------------------" << endl;
    cout << msg << endl;
    cout << "------------------------------" << endl;
}

void restaurant_list() {
    int choice_restaurant_list;
    cout << "\n========= Restaurant ==========" << endl;
    cout << "Press 1 Arr Han Tam Sang" << endl;
    cout << "Press 2 Khao Man Kai" << endl;
    cout << "Press 3 Gueytiew" << endl;
    cout << "Press 4 Drink Shop" << endl;
    cout << "Press 0 Back" << endl;
    cout << "===============================" << endl;

    cout << "\nSelect Restaurant >> ", cin >> choice_restaurant_list;

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

void additional_menu2_1(vector<order_type>* order_list, string name, int price)
{
    int addon;
    cout << "\n===============================================" << endl;
    cout << "Press 1 Khao Man Kai Tom - 40 Baht" << endl;
    cout << "Press 2 Khao Man Kai Yang - 40 Baht" << endl;
    cout << "Press 3 Khao Man Kai Thot - 40 Baht" << endl;
    cout << "Press 4 Khao Man Kai Tom&Yang - 45 Baht" << endl;
    cout << "Press 5 Khao Man Kai Tom&Thot - 45 Baht" << endl;
    cout << "Press 6 Khao Man Kai Yang&Thot - 45 Baht" << endl;
    cout << "Press 7 Khao Man Kai Tom&Yang&Thot - 50 Baht" << endl;
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

void restaurant_menu2(vector<order_type>* order_list) {
    int menu;
    cout << "===============================================" << endl;
    cout << "Press 1 Khao Man Kai" << endl;
    cout << "Press 2 Khao Muu Daeng - 50 Baht" << endl;
    cout << "Press 3 Khao Muu Krob - 55 Baht" << endl;
    cout << "Press 4 Khao Muu Daeng Muu Krob - 60 Baht" << endl;
    cout << "Press 5 Khao Kluk Kra Pi - 50 Baht" << endl;
    cout << "Press 0 Back" << endl;
    cout << "===============================================" << endl;
    cout << "\nPlease Select Menu >> ", cin >> menu;

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

string generateUniqueFilename() {
    string prefix = "file";
    string extension = ".txt";

    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);
    char timestamp[20];
    strftime(timestamp, sizeof(timestamp), "%Y%m%d%H%M%S", localTime);

    int randomNum = rand() % 1000;

    string uniqueFilename = prefix + timestamp + to_string(randomNum) + extension;

    return uniqueFilename;
}

void additional_menu3_5(vector<order_type>& order_list,string name, string name2, string name3, string name4, int price) {
    int qty;
    order_type order;
    order.name = name + " " + name2 + " " + name3 + " " + name4;
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

void additional_menu3_4(vector<order_type>* order_list,string name, string name2, string name3, int price) {
    cout << "\n----- Special or Normal -----" << endl;
    cout << "\nPress 1 Special + 5 Baht" << endl;
    cout << "\nPress 2 Normal" << endl;
    cout << "\n----*-------%----+-----------" << endl;

    int choice_additional_menu3;
    cout << "Enter >> ", cin >> choice_additional_menu3;

    if(choice_additional_menu3 == 1) {
        additional_menu3_5(*order_list,name,name2,name3,"Pi set",price + 5);
    } else if(choice_additional_menu3 == 2) {
        additional_menu3_5(*order_list,name,name2,name3,"Thammada",price);
    } else {
        additional_menu3_5(*order_list,name,name2,name3,"Thammada",price);
        alert_message("If not selected, it will be set to Normal.");
    }
}

void additional_menu3_2(vector<order_type>* order_list,string name, string name2, int price) {
    cout << "\n----- Choose meat -----" << endl;
    cout << "\nPress 1 Mu Chin " << price + 15 << " Baht" << endl;
    cout << "\nPress 2 Mu Sap " << price + 10 << " Baht" << endl;
    cout << "\nPress 3 Nong Kai " << price + 15 << " Baht" << endl;
    cout << "\nPress 4 Kai Chik " << price + 10 << " Baht" << endl;
    cout << "\n-----*----------*-----" << endl;

    int choice_additional_menu3;
    cout << "Enter >> ", cin >> choice_additional_menu3;

    if(choice_additional_menu3 == 1) {
        additional_menu3_4(order_list,name,name2,"Mu Chin",price + 15);
    } else if(choice_additional_menu3 == 2) {
        additional_menu3_4(order_list,name,name2,"Mu Sap",price + 10);
    } else if(choice_additional_menu3 == 3) {
        additional_menu3_4(order_list,name,name2,"Nong Kai",price + 15);
    } else if(choice_additional_menu3 == 4) {
        additional_menu3_4(order_list,name,name2,"Kai Chik",price + 10);
    }
}

void additional_menu3_1(vector<order_type>* order_list,string name, int price) {
    
    cout << "\n----- Choose noodles -----" << endl;
    cout << "\nPress 1 Sen Lek" <<  endl;
    cout << "\nPress 2 Sen Yai"<< endl;
    cout << "\nPress 3 Sen Ma Ma" << endl;
    cout << "\nPress 4 Sen Mi " << endl;
    cout << "\nPress 0 Backward" << endl;
    cout << "\n-----+----------+-----" << endl;

    int choice_additional_menu3;
    cout << "Enter >> ", cin >> choice_additional_menu3;
    
    if(choice_additional_menu3 == 1) {
        additional_menu3_2(order_list,name,"Sen Lek",price + 9);
    } else if(choice_additional_menu3 == 2) {
        additional_menu3_2(order_list,name,"Sen Yai",price + 7);
    } else if(choice_additional_menu3 == 3) {
        additional_menu3_2(order_list,name,"Sen Ma Ma",price + 7);
    } else if(choice_additional_menu3 == 4) {
        additional_menu3_2(order_list,name,"Sen Mi",price + 7);
    } else if(choice_additional_menu3 == 0) {
        total -= 40;
    } else {
        cout << "Invaild Choice" << endl;
        total -= 40;
    }
}

void restaurant_menu3(vector<order_type>* order_list) {
    cout << "-" << setw(90) << setfill('-') << "-" << endl;
    cout << setw(55) << setfill(' ') <<  "Welcome to Restaurant 3" << endl;
    cout << setfill(' ') << setw(30) << "Press 1" <<  setw(20) << setfill(' ') << "Kuaitiao Nam Sai" << endl;
    cout << setfill(' ') << setw(30) << "Press 2" <<  setw(20) << setfill(' ') << "Kuaitiao Namtok" << endl;
    cout << setfill(' ') << setw(30) << "Press 3" <<  setw(20) << setfill(' ') << "Kuaitiao Tomyam" << endl;
    cout << setfill(' ') << setw(30) << "Press 4" <<  setw(20) << setfill(' ') << "Kuaitiao Yentafo" << endl;
    cout << setfill(' ') << setw(30) << "Press 0" <<  setw(20) << setfill(' ') << "Backward" << endl;
    cout << "+" << setw(90) << setfill('-') << "+" << endl;

    int choice_restaurant_menu3;

    cout << "Please select food >> ", cin >> choice_restaurant_menu3;

    if(choice_restaurant_menu3 == 1) {
        additional_menu3_1(order_list,"Kuaitiao Nam Sai", 30);
    } else if(choice_restaurant_menu3 == 2) {
        additional_menu3_1(order_list,"Kuaitiao Namtok",35);
    } else if(choice_restaurant_menu3 == 3) {
        additional_menu3_1(order_list,"Kuaitiao Tomyam",40);
    } else if(choice_restaurant_menu3 == 4) {
        additional_menu3_1(order_list,"Kuaitiao Yentafo",40);
    }
}

void additional_menu4_1(vector<order_type>& order_list, string name, int price)
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

void drink_shop_menu4(vector<order_type> *order_list) {
    cout << "Press 1 Nam Plao 10 Baht" << endl;
    cout << "Press 2 Nam Pep Si 15 Baht" << endl;
    cout << "Press 3 Namsom 15 Baht" << endl;
    cout << "Press 4 Namkhaeng Plao 5 Baht" << endl;
    cout << "Press 0 backward" << endl;

    int choice;
    cout << "Enter >> ", cin >> choice;
    if(choice == 1) {
        additional_menu4_1(*order_list,"Nam Plao", 10);
    } else if(choice == 2) {
        additional_menu4_1(*order_list,"Nam Pep si", 15);
    } else if(choice == 3) {
        additional_menu4_1(*order_list,"Namsom", 15);
    } else if(choice == 4) {
        additional_menu4_1(*order_list,"Namkhaeng", 5);
    }

}

void menu_list(vector<order_type> *order_list) {
    while (true) {
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
                drink_shop_menu4(order_list);
            }
        } else {
            alert_message("Please choose a restaurant first.");
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

void additional_menu1_1(vector<order_type>* order_list, int menu1)
{
    cout << "\nSelect Menu >> ", cin >> menu1;

    if(menu1 == 1)
    {
        cout << "\n======== Phat Kra Phrao ========" << endl;
        additional_menu1_2(order_list, "Phat Kra Phrao", 0);
        cout << "================================" << endl;
    }
    else if(menu1 == 2)
    {
        cout << "\n======== Phat Ka Na ========" << endl;
        additional_menu1_2(order_list, "Phat Ka Na", 0);
        cout << "============================" << endl;
    }
    else if(menu1 == 3)
    {
        cout << "\n======== Phat Prik Kaeng ========" << endl;
        additional_menu1_2(order_list, "Phat Prik Kaeng", 0);
        cout << "=================================" << endl;
    }
    else if(menu1 == 4)
    {
        cout << "\n======== Phat Phong Kra Ri ========" << endl;
        additional_menu1_2(order_list, "Phat Phong Kra Ri", 0);
        cout << "===================================" << endl;
    }
    else if(menu1 == 5)
    {
        cout << "\n======== Tod Kra Tiem ========" << endl;
        additional_menu1_2(order_list, "Tod Kra Tiem", 0);
        cout << "==============================" << endl;
    }
    else if(menu1 == 6)
    {
        cout << "\n======== Khao Phat ========" << endl;
        additional_menu1_2(order_list, "Khao Phat", 0);
        cout << "===========================" << endl;
    }
}

void additional_menu1_2(vector<order_type>* order_list, string name, int price)
{
    int addon;

    cout << "Press 1 Muu Sab - 40 Baht" << endl;
    cout << "Press 2 Muu Chin - 40 Baht" << endl;
    cout << "Press 3 Muu Krob - 40 Baht" << endl;
    cout << "Press 4 Kai - 40 Baht" << endl;
    cout << "Press 5 Nue - 40 Baht" << endl;
    cout << "Press 6 Kung - 45 Baht" << endl;
    cout << "Press 7 Pra Muek - 45 Baht" << endl;
    cout << "Press 8 Ruem Mit - 45 Baht" << endl;
    cout << "==============================" << endl;
    cout << "\nPress >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu1_3(order_list, name, " Muu Sab", 40);
    }
    else if(addon == 2)
    {
        additional_menu1_3(order_list, name, " Muu Chin", 40);
    }
    else if(addon == 3)
    {
        additional_menu1_3(order_list, name, " Muu Krob", 40);
    }
    else if(addon == 4)
    {
        additional_menu1_3(order_list, name, " Kai", 40);
    }
    else if(addon == 5)
    {
        additional_menu1_3(order_list, name, " Nue", 40);
    }
    else if(addon == 6)
    {
        additional_menu1_3(order_list, name, " Kung", 45);
    }
    else if(addon == 7)
    {
        additional_menu1_3(order_list, name, " Pra Muek", 45);
    }
    else if(addon == 8)
    {
        additional_menu1_3(order_list, name, " Ruem Mit", 45);
    }
}

void additional_menu1_3(vector<order_type>* order_list, string name, string name2, int price)
{
    int addon;
    
    cout << "\n======== " << name << name2 << " " << price << " Baht" << " ========" << endl;
    cout << "Press 1 Khai Daw (+10 Baht)" << endl;
    cout << "Press 2 Khai Jeaw (+10 Baht)" << endl;
    cout << "Press 3 No Addon" << endl;
    cout << "======================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu1_4(order_list, name, name2, " Khai Daw", price + 10);
    }
    else if(addon == 2)
    {
        additional_menu1_4(order_list, name, name2, " Khai Jeaw", price + 10);
    }
    else if(addon == 3)
    {
        additional_menu1_4(order_list, name, name2, "", price + 0);
    }
}

void additional_menu1_4(vector<order_type>* order_list, string name, string name2, string name3, int price)
{
    int addon;
    
    cout << "\n======== " << name << name2 << name3 << " " << price << " Baht" << " ========" << endl;
    cout << "Press 1 Rad Khao" << endl;
    cout << "Press 2 Rad Khao Pi Set (+10 Baht)" << endl;
    cout << "Press 3 Kab Khao" << endl;
    cout << "Press 4 Kab Khao Pi Set (+10 Baht)" << endl;
    cout << "======================================" << endl;
    cout << "\nAddon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu1_5(*order_list, name, name2, name3, " Rad Khao", price + 0);
    }
    else if(addon == 2)
    {
        additional_menu1_5(*order_list, name, name2, name3, " Rad Khao Pi Set", price + 10);
    }
    else if(addon == 3)
    {
        additional_menu1_5(*order_list, name, name2, name3, " Kab Khao", price + 0);
    }
    else if(addon == 4)
    {
        additional_menu1_5(*order_list, name, name2, name3, " Kab Khao Pi Set", price + 10);
    }
}

void additional_menu1_5(vector<order_type>& order_list, string name, string name2, string name3, string name4, int price)
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

void restaurant_menu1(vector<order_type>* order_list) {
    int menu;

    cout << "\n===== Arr Han Tam Sang ===========" << endl;
    cout << "Press 1 Phat Kra Phrao" << endl;
    cout << "Press 2 Phat Ka Na" << endl;
    cout << "Press 3 Phat Prik Kaeng" << endl;
    cout << "Press 4 Phat Phong Kra Ri" << endl;
    cout << "Press 5 Tod Kra Tiem" << endl;
    cout << "Press 6 Khao Pad" << endl;
    cout << "Press 0 Back" << endl;
    cout << "==================================" << endl;

    additional_menu1_1(order_list, menu);
}


void save_file_order(vector<order_type>* order_list, int total_ok)
{
    string filename = generateUniqueFilename();
    ofstream outputFile(filename);
    if (outputFile.is_open())
    {
        outputFile << "- Order Lists -" << endl;
        for (const order_type& item : *order_list)
        {
            int item_total = item.price * item.qty;
            cout << item.name << " : " << item.price << " Baht" << endl;
            cout << "Quantity : " << item.qty << endl;
            cout << "Total : " << item_total << endl << endl;
        }
        outputFile << endl;
        outputFile << "Total Price : " << total_ok << " Baht" << endl;

        outputFile.close();
    //     cout << "Order list" << endl;
    //     ifstream inputFile(filename);
    //     if (inputFile.is_open()) {
    //     string line;
    //     while (getline(inputFile, line)) {
    //         cout << line << endl;
    //     }

    //     inputFile.close(); 
    // }
    }
}


void check_bill(vector<order_type>* order_list) {
    int choice, promotion_code, item_total;

    cout << "\n==================== Check Bill ====================" << endl;
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
    cout << "Press 0 Back" << endl;
    cout << "====================================================" << endl;
    cout << "\nPress >> ", cin >> choice;

    if(choice == 1)
    {
        int choice2;

        cout << "\n- Confirm Order -" << endl;
        total_price(order_list, total);
        
    }
    else if(choice == 2)
    {
        int choice2, total_code, discout;
        string promotion_code;

        cout << "\n- Promotion -" << endl;
        cout << "Promotion Code >> ", cin >> promotion_code;

        if(promotion_code == "dc10")
        {
            discout = total * 10 / 100;
            total_code = total - discout;

            cout << "\n====== Discout 10% ======" << endl;
            total_price(order_list, total_code);
        }
        else if(promotion_code == "dc25")
        {
            discout = total * 25 / 100;
            total_code = total - discout;

            cout << "\n====== Discout 25% ======" << endl;
            total_price(order_list, total_code);
        }
        else if(promotion_code == "dc50")
        {
            discout = total * 50 / 100;
            total_code = total - discout;

            cout << "\n====== Discout 50% ======" << endl;
            total_price(order_list, total_code);
        }
        else
        {
            cout << "Invalid Code!" << endl;
        }
    }
    else if(choice == 3)
    {
        int choice2;

        cout << "\n- Confirm to Cancel Order! -" << endl;
        cout << "Press 1 Confirm" << endl;
        cout << "Press 0 Back" << endl;
        cout << "Press >> ", cin >> choice2;

        if(choice2 == 1)
        {
            cout << "\n>> Order Canceled <<" << endl;

            total = 0;
            order_list->clear();
        }
    }
}

void total_price(vector<order_type>* order_list, int total_code)
{
    int choice;

    cout << ">> Total Price : " << total_code << " <<" << endl;
    cout << "KBANK - 0862105192" << endl;

    cout << "\nPress 1 Payment Complete" << endl;
    cout << "Press 0 Back" << endl;
    cout << "Press >> ", cin >> choice;

    if(choice == 1)
    {
        cout << "\n>> Cooking. . . <<" << endl;
        save_file_order(order_list,total_code);
        total = 0;
        order_list->clear();
    }
}