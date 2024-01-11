#include <iostream>


int main()
{
    std::cout << "How many numbers would you like to have? ";
    int count = 0;
    std::cin >> count;
    for ( int i = 1; i >= count; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}
