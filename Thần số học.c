#include <stdio.h>
#include <string.h>
#include <ctype.h>

void numerology(char *s) {
    int result = 0;
    int sum = 0;
    char temp;

    char *x1[] = {"A","J","S"};
    char *x2[] = {"B","K","T","D","M","V","F","O","X","H","Q","Z"};
    char *x3[] = {"C","L","U","E","N","W","G","P","Y","I","R"};

    char *x4[] = {"D","M","V"};
    char *x6[] = {"F","O","X"};
    char *x8[] = {"H","Q","Z"};

    char *x5[] = {"E","N","W"};
    char *x7[] = {"G","P","Y"};
    char *x9[] = {"I","R"};

    for (int i = 0; i < strlen(s); i++) {
        temp = s[i];
        char str[2] = {temp, '\0'};
        if (strcmp(x1[0], str) == 0 || strcmp(x1[1], str) == 0 || strcmp(x1[2], str) == 0) {
            result += 1;
        } else if (strcmp(x2[0], str) == 0 || strcmp(x2[1], str) == 0 || strcmp(x2[2], str) == 0 ||
                   strcmp(x2[3], str) == 0 || strcmp(x2[4], str) == 0 || strcmp(x2[5], str) == 0 ||
                   strcmp(x2[6], str) == 0 || strcmp(x2[7], str) == 0 || strcmp(x2[8], str) == 0 ||
                   strcmp(x2[9], str) == 0 || strcmp(x2[10], str) == 0 || strcmp(x2[11], str) == 0) {
            if (strcmp(x4[0], str) == 0 || strcmp(x4[1], str) == 0 || strcmp(x4[2], str) == 0) {
                result += 4;
            } else if (strcmp(x6[0], str) == 0 || strcmp(x6[1], str) == 0 || strcmp(x6[2], str) == 0) {
                result += 6;
            } else if (strcmp(x8[0], str) == 0 || strcmp(x8[1], str) == 0 || strcmp(x8[2], str) == 0) {
                result += 8;
            } else {
                result += 2;
            }
        } else if (strcmp(x3[0], str) == 0 || strcmp(x3[1], str) == 0 || strcmp(x3[2], str) == 0 ||
                   strcmp(x3[3], str) == 0 || strcmp(x3[4], str) == 0 || strcmp(x3[5], str) == 0 ||
                   strcmp(x3[6], str) == 0 || strcmp(x3[7], str) == 0 || strcmp(x3[8], str) == 0 ||
                   strcmp(x3[9], str) == 0 || strcmp(x3[10], str) == 0) {
            if (strcmp(x5[0], str) == 0 || strcmp(x5[1], str) == 0 || strcmp(x5[2], str) == 0) {
                result += 5;
            } else if (strcmp(x7[0], str) == 0 || strcmp(x7[1], str) == 0 || strcmp(x7[2], str) == 0) {
                result += 7;
            } else if (strcmp(x9[0], str) == 0 || strcmp(x9[1], str) == 0) {
                result += 9;
            } else {
                result += 3;
            }
        }
    }

    if (result > 12) {
        while (result > 0 && sum <= 12) {
            sum += result % 10;
            result /= 10;
        }
        printf("%d", sum);
    } else {
        printf("%d", result);
    }
}

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    for (int i = 0; name[i]; i++) {
        name[i] = toupper(name[i]);
    }

    numerology(name);
    return 0;
}
