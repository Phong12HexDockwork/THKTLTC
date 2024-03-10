#include <iostream>
#include <array>
#include <string.h>
using namespace std ;

void numerology (char s[100]){

    int result = 0;
    int sum = 0;
    size_t count = strlen(s);

    for (int i = 0; i < count ;i++){

        if (int(toupper(s[i])>73)){result = result + (toupper(s[i])-73);} 
        else if (int(toupper(s[i])>82)){result = result + (toupper(s[i])-82);}
        else result = result + (toupper(s[i])-64);

    }
    if ( result > 12 ) {

        while (result > 0 && sum <= 12) {sum += result % 10; result /= 10;}
        cout << sum; 

    } else cout << result;
    return;
}

int main () {

    char name[100]; cin >> name; 
    numerology(name);
    return 0;

}
