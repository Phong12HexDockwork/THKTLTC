#include <iostream> 
using namespace std; 

bool prime_number (int n) {

    for(int i = 2; i < n  ; i++) { if (n % i == 0) {return false;} }
    return true;
}

void output(int n) { 

    if (prime_number(n) == true) {cout << n << " ";}
}

int main () { 

    int n; 

    do{
        
        cout << "Nhap vao n:", cin >> n; 

    } while (n > 50);

    for (int i = 2; i <= n ; i++ ) {output(i);}
    return 0; 
}
