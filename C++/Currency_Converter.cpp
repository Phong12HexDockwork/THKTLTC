#include <bits/stdc++.h>
using namespace std;

//(**)definite value for two array that [type] [price] || put this out main structure its will not reset value when take menu_exit
int index_temp[3], balance_money;
const char* menu_money[3] ={"Nhap loai tien :", "Nhap so tien :", "Nhap tien muon doi :"};
float price_currency [6] = {1, 0.00004, 0.054, 0.0015, 0.00029, 0.0061},sum_money;
string money_detail_transfer[3], type_money [6] = {"vnd", "usd", "won", "baht", "yuan", "yen" };

void main_money_transfer (int control_menu) {
    //(1.1)Showing main_menu and take the output for each step [1] type money in [2] amount [3] type money out 
    for (control_menu ; control_menu < 3; control_menu++ ) {cout << control_menu + 1 << ". "<< menu_money[control_menu]; cin >> money_detail_transfer [control_menu]; cout << endl;}
    
    //(1.1**)Comparing which index value in array exist and take [price] of them 
    for (int index = 0; index < 3; index++ ) { for (int jndex = 0; jndex < 6; jndex++ ) {
    if (money_detail_transfer[index] == type_money[jndex]) { index_temp[index] = jndex ;} }}
    
    //(1.3)Conclusion transfer [string] [amount] to [int] and put it into formula
    sum_money = ( (stoi (money_detail_transfer[1])) * (1/price_currency[index_temp[0]]) ) / (1/price_currency[index_temp[2]]) ;
    cout << sum_money << endl;

    return;
}

int after_transfer (int control_menu) { //(2.1)menu exit and take control menu key [continue] or [break]

    cout << "1. Quay lai buoc 1" << endl << "2. Quay lai buoc 2" << endl << "3. Quay lai buoc 3" << endl << "0. Thoat" << endl ;
    cin >> control_menu;  return control_menu ;
}

int main () { 
    //(1.) Control menu while its end with [0] => end stats; while the first remote always stats at 1 and after will be permission for user 
    int control_menu = 1;
     
    menu_main: main_money_transfer( control_menu - 1 ); control_menu = after_transfer (control_menu);
    if (control_menu != 0) {goto menu_main;} // (2.)Control exit menu if user match [1] [2] [3] will go to solution again

    return 0; 
}
