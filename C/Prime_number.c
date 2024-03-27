#include <stdio.h>

int prime_number(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

void output(int n) {
    if (prime_number(n) == 1) {
        printf("%d ", n);
    }
}

int main() {
    int n;

    do {
        printf("Nhap vao n: ");
        scanf("%d", &n);
    } while (n > 50);

    for (int i = 2; i <= n; i++) { output(i);}

    return 0;
}
