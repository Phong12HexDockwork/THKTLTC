#include <iostream>
using namespace std; 

void tam_giac_tren () { 

    for(int i = 1; i <= 4 ; i++) { 
      
    for(int j = i; j <  4 ; j++) {

        cout << " ";
    }
 
 
    for(int j = 1; j <= (2*i-1); j++) {

        cout << "*";
    }

        cout << endl << endl;
    }
}

void duong_thang_giua () {

    cout << endl;
    
    for (int i = 1; i < 5 ; i++) {
    for (int j = 1; j < 4 ; j++) cout << " ";
    cout << "*" << endl << endl;
    }   
}

void tam_giac_duoi () {

    for(int i = 1; i <= 4 ; i++){
        
    for(int j = 1; j < i  ; j++){

        cout << " ";
    }
 
    for(int j = 1; j <= (4*2 -(2*i-1)); j++){

        cout << "*";
    }

        cout << endl << endl;
    }

}

int main () { 
    tam_giac_tren();
    duong_thang_giua ();
    tam_giac_duoi ();
    return 0;
}
