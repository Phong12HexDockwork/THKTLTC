#include <iostream>
using namespace std;

void quater (int index){
    
    int v_quater;
    
    if (index < 4) {v_quater = 1 ;} else 
    if (index < 7) {v_quater = 2 ;} else 
    if (index < 9) {v_quater = 3 ;} else v_quater = 4;
    
    cout << v_quater;
    return;
}

int main () {
    
    int day, month, year;
    cin >> day >> month >> year;
    
    quater(month);
    return 0;
}
