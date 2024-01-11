#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a positive number: ";
    int number = 0;
    cin >> number;
    if ( number <= 0 ){
        cout << "Only positive numbers accepted";
        return 0;
    }
    for ( int x = 1; x <= number; ++x ){
        int y = number / x;
        if ( x * y == number ){
            if ( x == y ){
                cout << number << " = " << x << " * " << y;
                return 0;
            }
            if ( y < x ){
                cout << number << " = " << y << " * " << x;
                return 0;
            }
        }
    }

    return 0;
}
