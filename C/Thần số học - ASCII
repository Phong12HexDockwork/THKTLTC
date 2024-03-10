#include <stdio.h>
#include <string.h>
#include <ctype.h>

void numerology(char s[100]) {
    int result = 0;
    int sum = 0;
    size_t count = strlen(s);

    for (int i = 0; i < count; i++) {
        char c = toupper(s[i]);
        if (c > 'I') {
            result += (c - 'I');
        } else if (c > 'R') {
            result += (c - 'R');
        } else {
            result += (c - 'A' + 1);
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
    scanf("%s", name);
    numerology(name);
    return 0;
}
