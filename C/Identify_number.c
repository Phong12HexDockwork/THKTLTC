#include <stdio.h>

const char* definite_number[10] = {"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};

// (1) Structure to hold separated digits and index
struct number {
    int index;
    int number_settings[4];
};

// (1.1) Separate a four-digit number into digits and store in number structure
struct number separate(int n_raw) {
    struct number n_separated = {0};
    while (n_raw > 0) {
        n_separated.index++;
        n_separated.number_settings[n_separated.index] = n_raw % 10;
        n_raw /= 10;
    }
    return n_separated;
}

// (2.1) Identify the number [a][b][c][d] for 1..9 have the alphabet word of that in vietnamese. ex:[a] = 1 = mot; [b] = 2 = hai;... 
void identify(int id_number[4], int index) {
    for (index; index > 0; index--) {
        // Each case [c] [d] will be compiled for each that can happen with maintenance
        if (index == 2 && id_number[index] == 1 && id_number[index - 1] == 0) { // Case situation [1][0] => [muoi]
            printf(" muoi ");
            break;
        } else if (index == 2 && id_number[index] != 1 && id_number[index] != 0  && id_number[index - 1] == 0) { // Case situation [n][0] => [n][muoi]
            printf("%s muoi ", definite_number[id_number[index]]);
            break;
        } else if (index == 2 && id_number[index] == 1 && id_number[index - 1] != 0) { // Case situation [1][n] => [muoi] [n]
            printf(" muoi %s", definite_number[id_number[index - 1]]);
            break;
        } else if (index == 2 && id_number[index] != 1 && id_number[index] != 0  && id_number[index - 1] != 0) { // Case situation [n][n-1]
            printf("%s muoi %s", definite_number[id_number[index]], definite_number[id_number[index - 1]]);
            break;
        } else if (index == 2 && id_number[index] == 0 && id_number[index - 1] != 0 ) { // Case situation [0] [n] => [khong] [n_final]
            printf("%s %s", definite_number[id_number[index]], definite_number[id_number[index - 1]]);
            break;
        }
        printf("%s ", definite_number[id_number[index]]);
        switch (index) {
            case 4:
                printf("nghin ");
                break;
            case 3:
                printf("tram ");
                break;
            case 2:
                printf("muoi ");
                break;
        }
    }
}

int main() {
    // Input from the beginning of the code with [raw number] = [abcd] 
    int number_raw;
    printf("Vui long nhap : ");
    scanf("%d", &number_raw);

    // (1) [raw number] will be optimized for another form that [a] [b] [c] [d] in plot and detected which not affected
    struct number n_separated = separate(number_raw); 

    // (2) After matching the final array of [abcd], it will identify for each number constant in the plot [a] => ?? [b] => ?? ...
    identify(n_separated.number_settings, n_separated.index);

    return 0;
}
