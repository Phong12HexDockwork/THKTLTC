#include <bits/stdc++.h>
#include <istream>
#include <fstream>
using namespace std; 

void menu_cart (int counting_cart[3], const char* menu_shopping_cart[3]) { //Menu when user choosen its + 1 for that kind
    cout << "[ C A R T ]"<< endl;
    for (int i = 0; i < 3; i++) { if (counting_cart[i] > 0) cout << endl << counting_cart[i] << menu_shopping_cart[i] << endl; }
}
void menu_main () { //Menu balance
    cout << "Nhap So tien: ";
}
void menu_unable (int menu_unable_money) {  //Menu when user don't enough money to take any type of in vending machine

    cout << "So tien hien tai la: "<< menu_unable_money << endl << "   Khong du tien! "<< endl << "1. Them Tien"<< endl << "0. Thoat" << endl;
}
void menu_afford (int menu_afford_money, int counting_cart[3],int menu_type_price[3], const char* menu_shopping_cart[3]) { //Pop up when balance still enough
    cout << endl <<"So tien hien tai: " << menu_afford_money << endl <<" Lua chon: "<< endl;
    for (int i = 0; i < 4;i++) { if ((counting_cart[i] < 3) && (menu_afford_money >= menu_type_price [i])) {cout << i+1 << ".  " << menu_shopping_cart[i] << "     " << menu_type_price[i]<< endl; } }
    cout << "0.   Thoat" << endl;
}
void menu_exit (int balance_money){ //Exit menu ~~ end program
    cout <<"Tra lai ban: "<< balance_money << endl <<"Xin cam on va hen gap lai!";
}
int main () {
    //Setting for all Value of menu which can happen, Identifying the price of the categories and their name in 3x array include [price] - [counting happen] - [name]
    int menu_id, balance_money, adding_money;
    int menu_type_price[3] = {5000,10000,15000}, counting_type[3] = {0,0,0};
    const char* menu_shopping_cart[3] ={" Coca "," Snack "," Chocolate "};

    //1. Deploy the first menu to get the Input [balance_money] and optimizing this two situations .The first one - the balance under 50000 [lowest price] and [other]
    menu_main(); cin >> balance_money; 

    if (balance_money >= 5000) {goto menu_pick_afford;}
    //1.1 If the balance early ready the case test will [pass] and go to [menu_pick_afford]. Otherwise, while its don't match with the condition - Tell the user that they want to add more money or stop 
    menu_unable: if (balance_money < 5000) {

                menu_unable(balance_money); cin >> menu_id;
                            
                if (menu_id == 0) {goto menu_ending_systems;}
                else do{

                        menu_main(); cin >> adding_money;
                        balance_money = balance_money + adding_money;

                }while (balance_money < 5000);}
    //2. In this balance will be held its to reduce when the user compose one kinds in vending program. [1]-Coca [2]-Snack [3]-Chocolate 
    //*** The conditions that [just chose 3 times of one kind] and [the balance higher than the choosen] when twos don't match anymore. The programs will not show that case 
    menu_pick_afford:menu_afford(balance_money, counting_type, menu_type_price, menu_shopping_cart); 

                cin >> menu_id; 
                
                if (menu_id == 0) {goto menu_ending_systems;} 
                else {balance_money = balance_money - menu_type_price[menu_id - 1]; ++counting_type[menu_id-1]; menu_cart(counting_type,menu_shopping_cart);}
                if (balance_money >= 5000) {goto menu_pick_afford;} else goto menu_unable;
    //3. All situations when user click zero button, it will send command to this which can break this program any times. 
    menu_ending_systems:menu_exit (balance_money);

    return 0; 
}
