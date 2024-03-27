#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// (***) Definite value for two arrays that store [type] and [price]
int index_temp[3], balance_money;
const char *menu_money[3] = {"Nhap loai tien :", "Nhap so tien :", "Nhap tien muon doi :"};
float price_currency[6] = {1, 0.00004, 0.054, 0.0015, 0.00029, 0.0061}, sum_money;

char money_detail_transfer[3][50], type_money[6][10] = {"vnd", "usd", "won", "baht", "yuan", "yen"}, temp_type[50];

// Function to convert string to lowercase
void toLower(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

void main_money_transfer(int control_menu) {
    //(1.1) Showing main_menu and take the output for each step [1] type money in [2] amount [3] type money out 
    for (; control_menu < 3; control_menu++) {
        printf("%d. %s", control_menu + 1, menu_money[control_menu]);
        scanf("%s", money_detail_transfer[control_menu]);
        toLower(money_detail_transfer[control_menu]); // Convert to lowercase
        printf("\n");
    }

    //(1.1**) Comparing which index value in array exist and take [price] of them 
    for (int index = 0; index < 3; index++) {
        for (int jndex = 0; jndex < 6; jndex++) {
            if (strcmp(money_detail_transfer[index], type_money[jndex]) == 0) {
                index_temp[index] = jndex;
            }
        }
    }

    //(1.3) Conclusion transfer [string] [amount] to [int] and put it into formula
    sum_money = ((atof(money_detail_transfer[1])) * (1 / price_currency[index_temp[0]])) / (1 / price_currency[index_temp[2]]);
    printf("%.4f\n", sum_money);
}

int after_transfer(int control_menu) { //(2.1) menu exit and take control menu key [continue] or [break]

    printf("1. Quay lai buoc 1\n2. Quay lai buoc 2\n3. Quay lai buoc 3\n0. Thoat\n");
    scanf("%d", &control_menu);
    return control_menu;
}

int main() {
    //(1.) Control menu while its end with [0] => end stats; while the first remote always stats at 1 and after will be permission for user 
    int control_menu = 1;

menu_main:
    main_money_transfer(control_menu - 1);
    control_menu = after_transfer(control_menu);
    if (control_menu != 0) {
        goto menu_main;
    }

    return 0;
}
