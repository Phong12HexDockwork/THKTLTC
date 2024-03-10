#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std; 

void numerology (string s){
    int result = 0;
    int sum = 0;
    string temp;

    set <string> x1 = {"A","J","S"};
    set <string> x2 = {"B","K","T","D","M","V","F","O","X","H","Q","Z"};
    set <string> x3 = {"C","L","U","E","N","W","G","P","Y","I","R"};

    set <string> x4 = {"D","M","V"};
    set <string> x6 = {"F","O","X"};
    set <string> x8 = {"H","Q","Z"};

    set <string> x5 = {"E","N","W"};
    set <string> x7 = {"G","P","Y"};
    set <string> x9 = {"I","R"};

    for (int i = 0; i<(size(s)); i++) {
        temp = s[i];
        if (x1.count(temp) != 0 ) {result = result + 1;} else 
  
        if (x2.count(temp) != 0 ) {

            if (x4.count(temp) != 0 ) {result = result + 4;} else 
            if (x6.count(temp) != 0 ) {result = result + 6;} else 
            if (x8.count(temp) != 0 ) {result = result + 8;} else {result = result + 2;}

        } else if (x3.count(temp) != 0 ) {

            if (x5.count(temp) != 0 ) {result = result + 5;} else 
            if (x7.count(temp) != 0 ) {result = result + 7;} else
            if (x9.count(temp) != 0 ) {result = result + 9;} else {result = result + 3;}

        }
    }
    
    if ( result > 12 ) {

        while (result > 0 && sum <= 12) {sum += result % 10; result /= 10;}
        cout << sum; 

    } else cout << result;
    return;
}
   
int main () {
    
    string name ; getline( cin , name );
    transform(name.begin(), name.end(), name.begin(), ::toupper);

    numerology(name);
    return 0; 
}
