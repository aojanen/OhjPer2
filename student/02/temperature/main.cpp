#include <iostream>

using namespace std;

int main()
{

    cout << "Enter a temperature: ";
    double temperature = 0;
    cin >> temperature;
    cout << temperature << " degrees Celsius is " << temperature * 1.8 + 32 << " degrees Fahrenheit" << endl;
    return 0;
}
