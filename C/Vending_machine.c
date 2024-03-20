#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 3

void menu_cart(int counting_cart[MAX_ITEMS], const char *menu_shopping_cart[MAX_ITEMS]) {//Menu when user choosen its + 1 for that kind
    printf("[ C A R T ]\n");
    for (int i = 0; i < MAX_ITEMS; i++) {if (counting_cart[i] > 0) {printf("%d %s\n", counting_cart[i], menu_shopping_cart[i]);}}
}
void menu_main() {///Menu balance
    printf("Nhap so tien: ");
}
void menu_unable(int menu_unable_money) {//Menu when user don't enough money to take any type of in vending machine
    printf("So du hien tai: %d\nKhong du tien!\n", menu_unable_money);
    printf("1. Them tien\n");
    printf("0. Thoat\n");
}
void menu_afford(int menu_afford_money, int counting_cart[MAX_ITEMS], const int menu_type_price[MAX_ITEMS], const char *menu_shopping_cart[MAX_ITEMS]) {//Pop up when balance still enough
    printf("\nSo du hien tai: %d\n", menu_afford_money);
    printf("Chon:\n");
    for (int i = 0; i < MAX_ITEMS; i++) {if ((counting_cart[i] < 3) && (menu_afford_money >= menu_type_price[i])) {printf("%d. %s  %d\n", i + 1, menu_shopping_cart[i], menu_type_price[i]);}}
    printf("0. Exit\n");
}
void menu_exit(int balance_money) { //Exit menu ~~ end program
    printf("Tra lai ban: %d\n", balance_money);
    printf("Hen gap lai vao lan sau!\n");
}

int main() {
    //Setting for all Value of menu which can happen, Identifying the price of the categories and their name in 3x array include [price] - [counting happen] - [name]
    int menu_id, balance_money, adding_money;
    int menu_type_price[MAX_ITEMS] = {5000, 10000, 15000};
    int counting_cart[MAX_ITEMS] = {0};
    const char *menu_shopping_cart[MAX_ITEMS] = {"Coca", "Snack", "Chocolate"};

     //1. Deploy the first menu to get the Input [balance_money] and optimizing this two situations .The first one - the balance under 50000 [lowest price] and [other]
    menu_main(); scanf("%d", &balance_money);

    if (balance_money >= 5000) {goto menu_pick_afford;}
    //1.1 If the balance early ready the case test will [pass] and go to [menu_pick_afford]. Otherwise, while its don't match with the condition - Tell the user that they want to add more money or stop 
    menu_unable: if (balance_money < 5000) {menu_unable(balance_money);
            scanf("%d", &menu_id);

            if (menu_id == 0) {goto menu_ending_systems;} 
            else do {
                    menu_main();
                    scanf("%d", &adding_money); balance_money += adding_money;
                } while (balance_money < 5000);
            }

    //2. In this balance will be held its to reduce when the user compose one kinds in vending program. [1]-Coca [2]-Snack [3]-Chocolate 
    //*** The conditions that [just chose 3 times of one kind] and [the balance higher than the choosen] when twos don't match anymore. The programs will not show that case 
    menu_pick_afford: menu_afford(balance_money, counting_cart, menu_type_price, menu_shopping_cart);
            scanf("%d", &menu_id);

            if (menu_id == 0) {goto menu_ending_systems;} else {balance_money -= menu_type_price[menu_id - 1]; counting_cart[menu_id - 1]++; menu_cart(counting_cart, menu_shopping_cart);}
            if (balance_money >= 5000) {goto menu_pick_afford;} else {goto menu_unable;}
    //3. All situations when user click zero button, it will send command to this which can break this program any times. 
    menu_ending_systems: menu_exit(balance_money);

    return 0;
}
