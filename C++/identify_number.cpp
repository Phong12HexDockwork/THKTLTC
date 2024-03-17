#include <iostream>
using namespace std;

//(1) Settings for each value will show in case of matching solutions 
struct number {
    int index = 0;
    int number_settings[4];
};
//(1.1) Need to value is array of [raw_number] transformed [a][b][c][d] and how many value really exits in that array - length of that piece 
number separate (int n_raw) {

    number n_separated;
    while (n_raw > 0) {
        n_separated.index++;
        n_separated.number_settings[n_separated.index] = n_raw % 10;
        n_raw /= 10;
    }
    return n_separated;
}

//(2) Identify the number [a][b][c][d] for 1..9 have the alphabet word of that in vietnamese. ex:[a] = 1 = mot; [b] = 2 = hai;... 
void identify (int id_number[4], int index){
    for (index; index > 0; index--){
        switch (id_number[index]){

            case 0: if (index != 1) {cout << "khong "; break;} else break;
            case 1: if (index != 2) {cout << "mot ";   break;} else break;
            case 2: cout << "hai ";   break;
            case 3: cout << "ba " ;   break;
            case 4: cout << "bon ";   break;
            case 5: cout << "nam ";   break;
            case 6: cout << "sau ";   break;
            case 7: cout << "bay ";   break;
            case 8: cout << "tam ";   break;
            case 9: cout << "chin ";  break;

        }
//(2.1)This case will show the unit of [a][b][c][d]. the first one ex: n tram means [n00] n nghin [n000] ...
//(2.1*)But ir remains notice that when [c][d] = {0,1}, [muoi] is not allowed to [0] output [khong] and otherwise [mot] output be[muoi]
        if (index == 4) {cout<< "nghin ";}
        else if (index == 3) {cout <<"tram ";}
        else if (index == 2 && id_number[index] != 0) {cout << "muoi ";}
    }
}


int main () {

    //Input from beginning  the code with [raw number] = [abcd] 
    int number_raw; cin >> number_raw;

    //(1) [raw number] will optimized for another form that [a] [b] [c] [d] in plot and detected which not affected
    number n_separated = separate(number_raw); 

    //(2) After matching final array of [abcd], its will identify for each number constant in plot [a] => ?? [b] => ?? ...
    identify(n_separated.number_settings, n_separated.index);

    return 0;

}
