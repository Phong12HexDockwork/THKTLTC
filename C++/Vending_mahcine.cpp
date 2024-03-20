#include <bits/stdc++.h>
#include <istream>
#include <fstream>
using namespace std; 

void menu_cart (int counting_cart[3], const char* menu_shopping_cart[3]) {
    cout << "[ C A R T ]"<< endl;
    for (int i = 0; i < 3; i++) { if (counting_cart[i] > 0) cout << endl << counting_cart[i] << menu_shopping_cart[i] << endl; }
}
void menu_main () {
    cout << "Nhap So tien: ";
}
void menu_unable (int menu_unable_money) {  

    cout << "So tien hien tai la: "<< menu_unable_money << endl << "   Khong du tien! "<< endl << "1. Them Tien"<< endl << "0. Thoat" << endl;
}
void menu_afford (int menu_afford_money, int counting_cart[3],int menu_type_price[3], const char* menu_shopping_cart[3]) {

    cout << endl <<"So tien hien tai: " << menu_afford_money << endl <<" Lua chon: "<< endl;
    for (int i = 0; i < 4;i++) { if ((counting_cart[i] < 3) && (menu_afford_money >= menu_type_price [i])) {cout << i+1 << ".  " << menu_shopping_cart[i] << "     " << menu_type_price[i]<< endl; } }
    cout << "0.   Thoat" << endl;
}
void menu_exit (int balance_money){
    cout <<"Tra lai ban: "<< balance_money << endl <<"Xin cam on va hen gap lai!";
}
int main () {
    
    int menu_id, balance_money, adding_money;
    int menu_type_price[3] = {5000,10000,15000}, counting_type[3] = {0,0,0};
    const char* menu_shopping_cart[3] ={" Coca "," Snack "," Chocolate "};
    menu_main(); cin >> balance_money; 

    if (balance_money >= 5000) {goto menu_pick_afford;}
                
    menu_unable: if (balance_money < 5000) {

                menu_unable(balance_money); cin >> menu_id;
                            
                if (menu_id == 0) {goto menu_ending_systems;}
                else do{

                        menu_main(); cin >> adding_money;
                        balance_money = balance_money + adding_money;

                }while (balance_money < 5000);}

    menu_pick_afford:menu_afford(balance_money, counting_type, menu_type_price, menu_shopping_cart); 

                cin >> menu_id; 
                
                if (menu_id == 0) {goto menu_ending_systems;} 
                else {balance_money = balance_money - menu_type_price[menu_id - 1]; ++counting_type[menu_id-1]; menu_cart(counting_type,menu_shopping_cart);}
                if (balance_money >= 5000) {goto menu_pick_afford;} else goto menu_unable;

    menu_ending_systems:menu_exit (balance_money);

    return 0; 
}
