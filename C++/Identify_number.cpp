#include <iostream>
using namespace std;

const char* definite_number[10] = {"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};

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

//(2.1) Identify the number [a][b][c][d] for 1..9 have the alphabet word of that in vietnamese. ex:[a] = 1 = mot; [b] = 2 = hai;... 
void identify (int id_number[4], int index){
    
            for (index; index > 0; index--){
                    // (2.1.1) Each case [c] [d] will compiling for each that can be happened with maintains 
                    if ( (index == 2 && id_number[index] == 1 && id_number[index - 1] == 0)  ) {     // Case situation [1][0] => [muoi] 

                                                            cout <<" muoi " ; break;}                                                else  

                    if ( (index == 2 && id_number[index] != 1 && id_number[index] != 0  && id_number[index - 1] == 0) ) {  // Case situation [n][0] => [n][muoi]

                                                            cout << definite_number [id_number[index]] << " muoi "; break;}          else 

                    if ( (index == 2 && id_number[index] == 1 && id_number[index - 1] != 0)) { // Case situation [1][n] => [muoi] [n]

                                                            cout << " muoi " << definite_number [id_number[index - 1]]; break;}       else 

                    if ( (index == 2 && id_number[index] != 1 && id_number[index] != 0  && id_number[index - 1] != 0) ) { //Case situation [n][n-1]
                                                        
                                                            cout << definite_number [id_number[index]] << " muoi " << definite_number[id_number[index - 1]] ; break;}      else 

                    if ( (index == 2 && id_number[index] == 0 && id_number[index - 1] != 0 )){ //Case situation [0] [n] => [khong] [n_final]

                                                            cout << definite_number [id_number[index]] << " " << definite_number [id_number[index - 1]]; break; }          else 
                    
                    cout << definite_number [id_number[index]] << " ";
                    
            switch (index){
                                case 4: cout << "nghin "; break; 
                                case 3: cout << "tram " ; break; 
                                case 2: cout << "muoi " ; break; 
                }
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
