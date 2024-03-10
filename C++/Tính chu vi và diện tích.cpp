#include <iostream>
#include <math.h> 
#include <cmath>
#include <iomanip> 
using namespace std;

void area_perimeter_square (int a){

    int area,perimeter;

    area = a*a; 
    perimeter = 4*a; 

    cout << "Square:"<< endl ;
    cout << "Area  = " << area << endl << "Perimeter = " << perimeter << endl; 

    return; 
}

void area_perimeter_rectangle (int a , int b) {
    int area,perimeter;

    area = a*b; 
    perimeter = 2*a + 2*b; 

    cout << "Rectangle:"<< endl ;
    cout << "Area  = " << area << endl << "Perimeter = " << perimeter << endl; 
    
    return;
}

void area_perimeter_triangle (int a) {
    int area,perimeter;

    area = (a*a * sqrt(3))/4; 
    perimeter = 3*a;

    cout << "Triangle"<< endl ;
    cout << "Area  = " << area << endl << "Perimeter = " << perimeter <<  endl; 
    
    return;
}

void area_perimeter_circle (float r) {
    float area,perimeter;

    area = M_PI * r * 2 ; 
    perimeter = M_PI * r ;

    cout << "Circle"<< endl ;
    cout << setprecision(2) << fixed << "Area  = " << area << endl; 
    cout << setprecision(2) << fixed << "Perimeter = " << perimeter << endl; 
    
    return;
}
int main () {

    area_perimeter_square (5);
    area_perimeter_rectangle(5,7);
    area_perimeter_triangle(3);
    area_perimeter_circle(5.0);
    return 0;
}
