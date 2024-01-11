#include <iostream>

using namespace std;

unsigned long int kertoma(int luku){
    unsigned long int tulos = 1;
    for (int n=1;n<=luku;++n){
        tulos = tulos*n;
    }
    return tulos;
}


int main()
{
    int drawn_balls=0;
    int total_balls=0;
    cout << "Enter the total number of lottery balls: ";
    cin >> total_balls;
    cout << "Enter the number of drawn balls: ";
    cin >> drawn_balls;
    if (drawn_balls<=0 || total_balls<=0){
        cout << "The number of balls must be a positive number." << endl;
        return 0;
    } else if (drawn_balls>total_balls) {
        cout << "The maximum number of drawn balls is the total amount of balls." << endl;
        return 0;
    }
    cout << "The probability of guessing all " << drawn_balls << " balls correctly is 1/" << kertoma(total_balls)/(kertoma(total_balls-drawn_balls)*kertoma(drawn_balls)) << endl;
    return 0;
}
