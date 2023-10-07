#include <iostream>
#include <iomanip>
using namespace std;

void restaurant_menu1();
void check_bill();

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

void additional_menu3_5(int price) {
    int qty;
    cout << "QTY >> ", cin >> qty;
    total += price * qty;
}

void additional_menu3_4(int price) {
    cout << "\n----- Special or Normal -----" << endl;
    cout << "\nPress 1 Special + 5 Bath" << endl;
    cout << "\nPress 2 Normal" << endl;
    cout << "\n----*-------%----+-----------" << endl;

    int choice_additional_menu3;
    cout << "Enter >> ", cin >> choice_additional_menu3;

    if(choice_additional_menu3 == 1) {
        additional_menu3_5(price + 5);
    } else if(choice_additional_menu3 == 2) {
        additional_menu3_5(price);
    } else {
        additional_menu3_5(price);
        alert_message("If not selected, it will be set to Normal.");
    }
}

void additional_menu3_2(int price) {
    cout << "\n----- Choose meat -----" << endl;
    cout << "\nPress 1 Mu Chin " << price + 15 << " Bath" << endl;
    cout << "\nPress 2 Mu Sap " << price + 10 << " Bath" << endl;
    cout << "\nPress 3 Nong Kai " << price + 15 << " Bath" << endl;
    cout << "\nPress 4 Kai Chik " << price + 10 << " Bath" << endl;
    cout << "\n-----*----------*-----" << endl;

    int choice_additional_menu3;
    cout << "Enter >> ", cin >> choice_additional_menu3;

    if(choice_additional_menu3 == 1) {
        additional_menu3_4(price + 15);
    } else if(choice_additional_menu3 == 2) {
        additional_menu3_4(price + 10);
    } else if(choice_additional_menu3 == 3) {
        additional_menu3_4(price + 15);
    } else if(choice_additional_menu3 == 4) {
        additional_menu3_4(price + 10);
    }
}

void additional_menu3_1(int price) {
    
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
        additional_menu3_2(price + 9);
    } else if(choice_additional_menu3 == 2) {
        additional_menu3_2(price + 7);
    } else if(choice_additional_menu3 == 3) {
        additional_menu3_2(price + 7);
    } else if(choice_additional_menu3 == 4) {
        additional_menu3_2(price + 7);
    } else if(choice_additional_menu3 == 0) {
        total -= 40;
    } else {
        cout << "Invaild Choice" << endl;
        total -= 40;
    }
}

void restaurant_menu3() {
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
        additional_menu3_1(30);
    } else if(choice_restaurant_menu3 == 2) {
        additional_menu3_1(35);
    } else if(choice_restaurant_menu3 == 3) {
        additional_menu3_1(40);
    } else if(choice_restaurant_menu3 == 4) {
        additional_menu3_1(40);
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

    cout << "\n===========================" << endl;
    cout << "Press 1 Restaurant " << endl;
    cout << "Press 2 Food " << endl;
    cout << "Press 3 Check bill " << endl;
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
                restaurant_menu1();
            } else if(restaurant_menu == 2) {
                restaurant_menu2();
            } else if(restaurant_menu == 3) {
                restaurant_menu3();
            } else if(restaurant_menu == 4) {
                drink_shop_menu4();
            }
        } else {
            alert_message("Please choose a restaurant first.");
        }
     } else if(choice_menu_list == 3) {
        check_bill();
     }
    }
}


int main() {
    menu_list();
}

void restaurant_menu1() {
    int choice_restaurant_menu1;

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

    cout << "\nSelect Menu >> ", cin >> choice_restaurant_menu1;

    if(choice_restaurant_menu1 == 1)
    {
        int addon1;

        cout << "\n======== Phat Kra Phrao ========" << endl;
        cout << "Press 1 Muu Sab - 40 Bath" << endl;
        cout << "Press 2 Muu Chin - 40 Bath" << endl;
        cout << "Press 3 Muu Krob - 40 Bath" << endl;
        cout << "Press 4 Kai - 40 Bath" << endl;
        cout << "Press 5 Nue - 40 Bath" << endl;
        cout << "Press 6 Kung - 45 Bath" << endl;
        cout << "Press 7 Pra Muek - 45 Bath" << endl;
        cout << "Press 8 Ruem Mit - 45 Bath" << endl;
        cout << "================================" << endl;
        cout << "\nPlease Addon >> ", cin >> addon1;

        if(addon1 == 1)
        {
            int addon2;

            cout << "\n- Phat Kra Phrao Muu Sab (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 2)
        {
            int addon2;

            cout << "\n- Phat Kra Phrao Muu Chin (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 3)
        {
            int addon2;

            cout << "\n- Phat Kra Phrao Muu Krob (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 4)
        {
            int addon2;

            cout << "\n- Phat Kra Phrao Kai (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 5)
        {
            int addon2;

            cout << "\n- Phat Kra Phrao Nue (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 6)
        {
            int addon2;

            cout << "\n- Phat Kra Phrao Kung (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 7)
        {
            int addon2;

            cout << "\n- Phat Kra Phrao Pra Muek (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 8)
        {
            int addon2;

            cout << "\n- Phat Kra Phrao Ruem Mit (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
    }
    else if(choice_restaurant_menu1 == 2)
    {
        int addon1;

        cout << "\n======== Phat Ka Na ========" << endl;
        cout << "Press 1 Muu Sab - 40 Bath" << endl;
        cout << "Press 2 Muu Chin - 40 Bath" << endl;
        cout << "Press 3 Muu Krob - 40 Bath" << endl;
        cout << "Press 4 Kai - 40 Bath" << endl;
        cout << "Press 5 Nue - 40 Bath" << endl;
        cout << "Press 6 Kung - 45 Bath" << endl;
        cout << "Press 7 Pra Muek - 45 Bath" << endl;
        cout << "Press 8 Ruem Mit - 45 Bath" << endl;
        cout << "============================" << endl;
        cout << "\nPlease Addon >> ", cin >> addon1;

        if(addon1 == 1)
        {
            int addon2;

            cout << "\n- Phat Ka Na Muu Sab (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 2)
        {
            int addon2;

            cout << "\n- Phat Ka Na Muu Chin (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 3)
        {
            int addon2;

            cout << "\n- Phat Ka Na Muu Krob (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 4)
        {
            int addon2;

            cout << "\n- Phat Ka Na Kai (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 5)
        {
            int addon2;

            cout << "\n- Phat Ka Na Nue (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 6)
        {
            int addon2;

            cout << "\n- Phat Ka Na Kung (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 7)
        {
            int addon2;

            cout << "\n- Phat Ka Na Pra Muek (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 8)
        {
            int addon2;

            cout << "\n- Phat Ka Na Ruem Mit (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
    }
    else if(choice_restaurant_menu1 == 3)
    {
        int addon1;

        cout << "\n======== Phat Prik Kaeng ========" << endl;
        cout << "Press 1 Muu Sab - 40 Bath" << endl;
        cout << "Press 2 Muu Chin - 40 Bath" << endl;
        cout << "Press 3 Muu Krob - 40 Bath" << endl;
        cout << "Press 4 Kai - 40 Bath" << endl;
        cout << "Press 5 Nue - 40 Bath" << endl;
        cout << "Press 6 Kung - 45 Bath" << endl;
        cout << "Press 7 Pra Muek - 45 Bath" << endl;
        cout << "Press 8 Ruem Mit - 45 Bath" << endl;
        cout << "=================================" << endl;
        cout << "\nPlease Addon >> ", cin >> addon1;

        if(addon1 == 1)
        {
            int addon2;

            cout << "\n- Phat Prik Kaeng Muu Sab (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 2)
        {
            int addon2;

            cout << "\n- Phat Prik Kaeng Muu Chin (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 3)
        {
            int addon2;

            cout << "\n- Phat Prik Kaeng Muu Krob (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 4)
        {
            int addon2;

            cout << "\n- Phat Prik Kaeng Kai (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 5)
        {
            int addon2;

            cout << "\n- Phat Prik Kaeng Nue (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 6)
        {
            int addon2;

            cout << "\n- Phat Prik Kaeng Kung (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 7)
        {
            int addon2;

            cout << "\n- Phat Prik Kaeng Pra Muek (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 8)
        {
            int addon2;

            cout << "\n- Phat Prik Kaeng Ruem Mit (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
    }
    else if(choice_restaurant_menu1 == 4)
    {
        int addon1;

        cout << "\n======== Phat Phong Kra Ri ========" << endl;
        cout << "Press 1 Muu Sab - 40 Bath" << endl;
        cout << "Press 2 Muu Chin - 40 Bath" << endl;
        cout << "Press 3 Muu Krob - 40 Bath" << endl;
        cout << "Press 4 Kai - 40 Bath" << endl;
        cout << "Press 5 Nue - 40 Bath" << endl;
        cout << "Press 6 Kung - 45 Bath" << endl;
        cout << "Press 7 Pra Muek - 45 Bath" << endl;
        cout << "Press 8 Ruem Mit - 45 Bath" << endl;
        cout << "===================================" << endl;
        cout << "\nPlease Addon >> ", cin >> addon1;

        if(addon1 == 1)
        {
            int addon2;

            cout << "\n- Phat Phong Kra Ri Muu Sab (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 2)
        {
            int addon2;

            cout << "\n- Phat Phong Kra Ri Muu Chin (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 3)
        {
            int addon2;

            cout << "\n- Phat Phong Kra Ri Muu Krob (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 4)
        {
            int addon2;

            cout << "\n- Phat Phong Kra Ri Kai (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 5)
        {
            int addon2;

            cout << "\n- Phat Phong Kra Ri Nue (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 6)
        {
            int addon2;

            cout << "\n- Phat Phong Kra Ri Kung (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 7)
        {
            int addon2;

            cout << "\n- Phat Phong Kra Ri Pra Muek (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 8)
        {
            int addon2;

            cout << "\n- Phat Phong Kra Ri Ruem Mit (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
    }
    else if(choice_restaurant_menu1 == 5)
    {
        int addon1;

        cout << "\n======== Tod Kra Tiem ========" << endl;
        cout << "Press 1 Muu Sab - 40 Bath" << endl;
        cout << "Press 2 Muu Chin - 40 Bath" << endl;
        cout << "Press 3 Muu Krob - 40 Bath" << endl;
        cout << "Press 4 Kai - 40 Bath" << endl;
        cout << "Press 5 Nue - 40 Bath" << endl;
        cout << "Press 6 Kung - 45 Bath" << endl;
        cout << "Press 7 Pra Muek - 45 Bath" << endl;
        cout << "Press 8 Ruem Mit - 45 Bath" << endl;
        cout << "==============================" << endl;
        cout << "\nPlease Addon >> ", cin >> addon1;

        if(addon1 == 1)
        {
            int addon2;

            cout << "\n- Muu Sab Tod Kra Tiem (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 2)
        {
            int addon2;

            cout << "\n- Muu Chin Tod Kra Tiem (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 3)
        {
            int addon2;

            cout << "\n- Muu Krob Tod Kra Tiem (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 4)
        {
            int addon2;

            cout << "\n- Kai Tod Kra Tiem (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 5)
        {
            int addon2;

            cout << "\n- Nue Tod Kra Tiem (40 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
            else if(addon2 == 3)
            {
                total += 40;
            }
            else if(addon2 == 4)
            {
                total += 45;
            }
        }
        else if(addon1 == 6)
        {
            int addon2;

            cout << "\n- Kung Tod Kra Tiem (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 7)
        {
            int addon2;

            cout << "\n- Pra Muek Tod Kra Tiem (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
        else if(addon1 == 8)
        {
            int addon2;

            cout << "\n- Ruem Mit Tod Kra Tiem (45 Bath) -" << endl;
            cout << "Press 1 Rad Khao" << endl;
            cout << "Press 2 Rad Khao Pi Set (+5 Bath)" << endl;
            cout << "Press 3 Kab Khao" << endl;
            cout << "Press 4 Kab Khao Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
            else if(addon2 == 3)
            {
                total += 45;
            }
            else if(addon2 == 4)
            {
                total += 50;
            }
        }
    }
    else if(choice_restaurant_menu1 == 6)
    {
        int addon1;

        cout << "\n======== Khao Phat ========" << endl;
        cout << "Press 1 Muu Sab - 40 Bath" << endl;
        cout << "Press 2 Muu Chin - 40 Bath" << endl;
        cout << "Press 3 Muu Krob - 40 Bath" << endl;
        cout << "Press 4 Kai - 40 Bath" << endl;
        cout << "Press 5 Nue - 40 Bath" << endl;
        cout << "Press 6 Kung - 45 Bath" << endl;
        cout << "Press 7 Pra Muek - 45 Bath" << endl;
        cout << "Press 8 Ruem Mit - 45 Bath" << endl;
        cout << "============================" << endl;
        cout << "\nPlease Addon >> ", cin >> addon1;

        if(addon1 == 1)
        {
            int addon2;

            cout << "\n- Khao Phat Muu Sab (40 Bath) -" << endl;
            cout << "Press 1 Tam Ma Da" << endl;
            cout << "Press 2 Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
        }
        else if(addon1 == 2)
        {
            int addon2;

            cout << "\n- Khao Phat Muu Chin (40 Bath) -" << endl;
            cout << "Press 1 Tam Ma Da" << endl;
            cout << "Press 2 Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
        }
        else if(addon1 == 3)
        {
            int addon2;

            cout << "\n- Khao Phat Muu Krob (40 Bath) -" << endl;
            cout << "Press 1 Tam Ma Da" << endl;
            cout << "Press 2 Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
        }
        else if(addon1 == 4)
        {
            int addon2;

            cout << "\n- Khao Phat Kai (40 Bath) -" << endl;
            cout << "Press 1 Tam Ma Da" << endl;
            cout << "Press 2 Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
        }
        else if(addon1 == 5)
        {
            int addon2;

            cout << "\n- Khao Phat Nue (40 Bath) -" << endl;
            cout << "Press 1 Tam Ma Da" << endl;
            cout << "Press 2 Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 40;
            }
            else if(addon2 == 2)
            {
                total += 45;
            }
        }
        else if(addon1 == 6)
        {
            int addon2;

            cout << "\n- Khao Phat Kung (45 Bath) -" << endl;
            cout << "Press 1 Tam Ma Da" << endl;
            cout << "Press 2 Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
        }
        else if(addon1 == 7)
        {
            int addon2;

            cout << "\n- Khao Phat Pra Muek (45 Bath) -" << endl;
            cout << "Press 1 Tam Ma Da" << endl;
            cout << "Press 2 Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
        }
        else if(addon1 == 8)
        {
            int addon2;

            cout << "\n- Khao Phat Ruem Mit (45 Bath) -" << endl;
            cout << "Press 1 Tam Ma Da" << endl;
            cout << "Press 2 Pi Set (+5 Bath)" << endl;
            cout << "\nPlease Addon >> ", cin >> addon2;

            if(addon2 == 1)
            {
                total += 45;
            }
            else if(addon2 == 2)
            {
                total += 50;
            }
        }
    }
    else if(choice_restaurant_menu1 == 7)
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

void check_bill()
{
    int choice, promotion_code;

    cout << "\n---- Check Bill ----" << endl;
    cout << "Total Price >> " << total << endl;

    cout << "\nPress 1 Pay" << endl;
    cout << "Press 2 Promotion Code" << endl;
    cout << "Press 3 Cancel Order" << endl;
    cout << "Press 0 Back" << endl;
    cout << "Press >> ", cin >> choice;

    if(choice == 1)
    {
        int choice2;

        cout << "\n- Confirm Order -" << endl;
        cout << "Total Price >> " << total << endl;
        cout << "KBANK - 0862105192" << endl;

        cout << "\nPress 1 Payment Complete" << endl;
        cout << "Press 0 Back" << endl;
        cout << "Press >> ", cin >> choice2;

        if(choice2 == 1)
        {
            cout << "\n>> Cooking. . . <<" << endl;

            total = 0;
        }
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

            cout << "\n>> Discout 10% <<" << endl;
            cout << "Total Price >> " << total_code << endl;
            cout << "KBANK - 0862105192" << endl;

            cout << "\nPress 1 Payment Complete" << endl;
            cout << "Press 0 Back" << endl;
            cout << "Press >> ", cin >> choice2;

            if(choice2 == 1)
            {
                cout << "\n>> Cooking. . . <<" << endl;

                total = 0;
            }
        }
        else if(promotion_code == "dc25")
        {
            discout = total * 25 / 100;
            total_code = total - discout;

            cout << "\n>> Discout 25% <<" << endl;
            cout << "Total Price >> " << total_code << endl;
            cout << "KBANK - 0862105192" << endl;

            cout << "\nPress 1 Payment Complete" << endl;
            cout << "Press 0 Back" << endl;
            cout << "Press >> ", cin >> choice2;

            if(choice2 == 1)
            {
                cout << "\n>> Cooking. . . <<" << endl;

                total = 0;
            }
        }
        else if(promotion_code == "dc50")
        {
            discout = total * 50 / 100;
            total_code = total - discout;

            cout << "\n>> Discout 50% <<" << endl;
            cout << "Total Price >> " << total_code << endl;
            cout << "KBANK - 0862105192" << endl;

            cout << "\nPress 1 Payment Complete" << endl;
            cout << "Press 0 Back" << endl;
            cout << "Press >> ", cin >> choice2;

            if(choice2 == 1)
            {
                cout << "\n>> Cooking. . . <<" << endl;

                total = 0;
            }
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
        }
    }
}