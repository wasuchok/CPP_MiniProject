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

void restaurant_menu1(vector<order_type>* order_list);
void additional_menu1_1(vector<order_type>* order_list, int menu1);
void additional_menu1_2(vector<order_type>* order_list, string name, int price);
void additional_menu1_3(vector<order_type>* order_list, string name, string name2, int price);
void additional_menu1_4(vector<order_type>& order_list, string name, string name2, string name3, int price);
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
    cout << "\n================= Restaurant =================" << endl;
    cout << "Press 1 Arr Han Tam Sang Tee Noi" << endl;
    cout << "Press 2 Khao Man Kai" << endl;
    cout << "Press 3 Gueytiew" << endl;
    cout << "Press 4 Drink Shop" << endl;
    cout << "Press 0 Back" << endl;
    cout << "===============================================" << endl;

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

void restaurant_menu2() {

    cout << "Press 1 Khaoman kai" << endl;
    cout << "Press 2 Khao Mudaeng 50 Bath" << endl;
    cout << "Press 3 Khao MuKrop 55 Bath" << endl;
    cout << "Press 4 Khao Khluk Kra Pi 50 Bath" << endl;
    cout << "Press 5 Khao MudaengMuKrop 55 Bath" << endl;
    cout << "Press 0 backward" << endl;

    int restaurant_menu2;
   
    cout << "Please select food >> ", cin >> restaurant_menu2;

    int restaurant_menu2_choice;
    int restaurant_menu2_praphet;

    if(restaurant_menu2 == 1){
            cout << "Press 1 Khaoman Kai Tom  40 Bath" << endl;
            cout << "Press 2 Khaoman Kai Yang 40 Bath" << endl;
            cout << "Press 3 Khaoman Kai Thot 45 Bath" << endl;
            cout << "Please select choice >> ", cin >> restaurant_menu2_choice;

           

                if(restaurant_menu2_choice == 1 || restaurant_menu2_choice == 2){
                cout << "Press 1 Thammada" << endl;
                cout << "Press 2 Phiset" << endl;
                cout << "Please select choice >> ", cin >> restaurant_menu2_praphet;

                        if(restaurant_menu2_praphet == 1){
                            total += 40;
                        }else if(restaurant_menu2_praphet == 2){
                            total += 40 + 10;
                        }
                }

                            else if(restaurant_menu2_choice == 3){
                                cout << "Press 1 Thammada" << endl;
                                cout << "Press 2 Phiset" << endl;
                                cout << "Please select choice >> ", cin >> restaurant_menu2_praphet;

                                if(restaurant_menu2_praphet == 1){
                                    total += 45;
                                }else if(restaurant_menu2_praphet == 2){
                                    total += 45 + 10;
                                }
                            }


        }else if(restaurant_menu2 == 2){
            cout << "Press 1 Thammada" << endl;
            cout << "Press 2 Phiset" << endl;
            cout << "Please select choice >> ", cin >> restaurant_menu2_praphet;

                if(restaurant_menu2_praphet == 1){
                    total += 50;
                }else if(restaurant_menu2_praphet == 2){
                    total += 50 + 10;
                }

        }else if(restaurant_menu2 == 3){
            cout << "Press 1 Thammada" << endl;
            cout << "Press 2 Phiset" << endl;
            cout << "Please select choice >> ", cin >> restaurant_menu2_praphet;

                if(restaurant_menu2_praphet == 1){
                    total += 55;
                }else if(restaurant_menu2_praphet == 2){
                    total += 55 + 10;
                }
        }else if(restaurant_menu2 == 4){
            cout << "Press 1 Thammada" << endl;
            cout << "Press 2 Phiset" << endl;
            cout << "Please select choice >> ", cin >> restaurant_menu2_praphet;

                if(restaurant_menu2_praphet == 1){
                    total += 50;
                }else if(restaurant_menu2_praphet == 2){
                    total += 50 + 10;
                }
        }else if(restaurant_menu2 == 5){
            cout << "Press 1 Thammada" << endl;
            cout << "Press 2 Phiset" << endl;
            cout << "Please select choice >> ", cin >> restaurant_menu2_praphet;

                if(restaurant_menu2_praphet == 1){
                    total += 55;
                }else if(restaurant_menu2_praphet == 2){
                    total += 55 + 10;
                }
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
    cout << "QTY >> ", cin >> qty;
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
    cout << "\nPress 1 Special + 5 Bath" << endl;
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
    cout << "\nPress 1 Mu Chin " << price + 15 << " Bath" << endl;
    cout << "\nPress 2 Mu Sap " << price + 10 << " Bath" << endl;
    cout << "\nPress 3 Nong Kai " << price + 15 << " Bath" << endl;
    cout << "\nPress 4 Kai Chik " << price + 10 << " Bath" << endl;
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

void drink_shop_menu4(vector<order_type> *order_list) {
    cout << "Press 1 Nam Plao 10 Bath" << endl;
    cout << "Press 2 Nam Pep Si 15 Bath" << endl;
    cout << "Press 3 Namsom 15 Bath" << endl;
    cout << "Press 4 Namkhaeng Plao 5 Bath" << endl;
    cout << "Press 0 backward" << endl;

    int choice;
    cout << "Enter >> ", cin >> choice;
    // if(choice == 1) {
    //     additional_menu3_5(*order_list,"Nam Plao", 10);
    // } else if(choice == 2) {
    //     additional_menu3_5(*order_list,"Nam Pep si", 15);
    // } else if(choice == 3) {
    //     additional_menu3_5(*order_list,"Namsom", 15);
    // } else if(choice == 4) {
    //     additional_menu3_5(*order_list,"Namkhaeng", 5);
    // }
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
                restaurant_menu2();
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

    cout << "Press 1 Muu Sab - 40 Bath" << endl;
    cout << "Press 2 Muu Chin - 40 Bath" << endl;
    cout << "Press 3 Muu Krob - 40 Bath" << endl;
    cout << "Press 4 Kai - 40 Bath" << endl;
    cout << "Press 5 Nue - 40 Bath" << endl;
    cout << "Press 6 Kung - 45 Bath" << endl;
    cout << "Press 7 Pra Muek - 45 Bath" << endl;
    cout << "Press 8 Ruem Mit - 45 Bath" << endl;
    cout << "==============================" << endl;
    cout << "\nPress >> ", cin >> addon;

    if(addon == 1)
    {
        cout << "\n======== " << name << " Muu Sab ========" << endl;
        additional_menu1_3(order_list, name, " Muu Sab", 40);
    }
    else if(addon == 2)
    {
        cout << "\n======== " << name << " Muu Chin ========" << endl;
        additional_menu1_3(order_list, name, " Muu Chin", 40);
    }
    else if(addon == 3)
    {
        cout << "\n======== " << name << " Muu Krob ========" << endl;
        additional_menu1_3(order_list, name, " Muu Krob", 40);
    }
    else if(addon == 4)
    {
        cout << "\n======== " << name << " Kai ========" << endl;
        additional_menu1_3(order_list, name, " Kai", 40);
    }
    else if(addon == 5)
    {
        cout << "\n======== " << name << " Nue ========" << endl;
        additional_menu1_3(order_list, name, " Nue", 40);
    }
    else if(addon == 6)
    {
        cout << "\n======== " << name << " Kung ========" << endl;
        additional_menu1_3(order_list, name, " Kung", 45);
    }
    else if(addon == 7)
    {
        cout << "\n======== " << name << " Pra Muek ========" << endl;
        additional_menu1_3(order_list, name, " Pra Muek", 45);
    }
    else if(addon == 8)
    {
        cout << "\n======== " << name << " Ruem Mit ========" << endl;
        additional_menu1_3(order_list, name, " Ruem Mit", 45);
    }
}

void additional_menu1_3(vector<order_type>* order_list, string name, string name2, int price)
{
    int addon;
    
    cout << "Press 1 Rad Khao" << endl;
    cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
    cout << "Press 3 Kab Khao" << endl;
    cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
    cout << "======================================" << endl;
    cout << "\nPlease Addon >> ", cin >> addon;

    if(addon == 1)
    {
        additional_menu1_4(*order_list, name, name2, " Rad Khao", price + 0);
    }
    else if(addon == 2)
    {
        additional_menu1_4(*order_list, name, name2, " Rad Khao Pi Set", price + 5);
    }
    else if(addon == 3)
    {
        additional_menu1_4(*order_list, name, name2, " Kab Khao", price + 0);
    }
    else if(addon == 4)
    {
        additional_menu1_4(*order_list, name, name2, " Kab Khao Pi Set", price + 5);
    }
}

void additional_menu1_4(vector<order_type>& order_list, string name, string name2, string name3, int price)
{
    int qty;
    order_type order;
    order.name = name + name2 + name3;
    order.price = price;
    cout << "QTY >> ", cin >> qty;
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

    cout << "\n===== Arr Han Tam Sang Tee Noi =====" << endl;
    cout << "Press 1 Phat Kra Phrao" << endl;
    cout << "Press 2 Phat Ka Na" << endl;
    cout << "Press 3 Phat Prik Kaeng" << endl;
    cout << "Press 4 Phat Phong Kra Ri" << endl;
    cout << "Press 5 Tod Kra Tiem" << endl;
    cout << "Press 6 Khao Pad" << endl;
    cout << "Press 7 Khao Plao" << endl;
    cout << "Press 0 Back" << endl;
    cout << "==================================" << endl;

    additional_menu1_1(order_list, menu);

    if(menu == 7)
    {
        int addon1;

        cout << "\n======== Khao Plao ========" << endl;
        cout << "Press 1 No Addon (10 Bath)" << endl;
        cout << "Press 2 Khai Dao (+10 Bath)" << endl;
        cout << "Press 3 Khai Jiew (+10 Bath)" << endl;
        cout << "\nPlease Addon >> ", cin >> addon1;

        if(addon1 == 1)
        {
            total += 10;
        }
        else if(addon1 == 2)
        {
            total += 20;
        }
        else if(addon1 == 3)
        {
            int addon2;

            cout << "\n- Khao Khai Jiew (20 Bath) -" << endl;
            cout << "Press 1 Muu Sab (+10 Bath)" << endl;
            cout << "Press 2 Kung (+10 Bath)" << endl;
            cout << "Press 3 Cha-om (+10 Bath)" << endl;
            cout << "Press 4 Prik (+10 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;
           
            if(addon2 == 1)
            {
                total += 30;
            }
            else if(addon2 == 2)
            {
                total += 30;
            }
            else if(addon2 == 3)
            {
                total += 30;
            }
            else if(addon2 == 4)
            {
                total += 30;
            }
        }
    }
}


void save_file_order(vector<order_type>* order_list) {
    string filename = generateUniqueFilename();
    ofstream outputFile(filename);
        if (outputFile.is_open()) {
        for (const order_type& item : *order_list) {
            outputFile << item.name << ": " << item.price << " Bath " << item.qty << " QTY" << endl;
        }
        outputFile << endl;
        outputFile << "Total Price : " << total << " Bath" << endl;

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
    int choice, promotion_code;

    cout << "\n==================== Check Bill ====================" << endl;
        for (const order_type& item : *order_list) {
            cout << item.name << " : " << item.price << " Bath " << " - " << item.qty << " QTY" << endl;
        }
        cout << endl;

    cout << ">> Total Price : " << total << " <<" << endl;

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

        total = 0;
        order_list->clear();
    }
}