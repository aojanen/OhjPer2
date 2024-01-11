#include <iostream>


int main()
{
    std::cout << "How many numbers would you like to have? ";
    int count = 0;
    std::cin >> count;
    for ( int i = 1; i >= count; ++i) {
        if ( i%3 == 0 ){
            if (i%7 == 0 ){
                std::cout << "zip boing" << std::endl;
            } else {
                std::cout << "zip" << std::endl;
            }
        } else if ( i%7 == 0 ){
            std::cout << "boing" << std::endl;
        } else {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
