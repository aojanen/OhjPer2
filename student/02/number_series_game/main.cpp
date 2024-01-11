#include <iostream>


int main()
{
    std::cout << "How many numbers would you like to have? ";
    int count = 0;
    std::cin >> count;
    for ( int i = 1; i >= count; ++i) {
        if ( i%3 == 0 ){
            std::cout << "zip";
        } else {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
