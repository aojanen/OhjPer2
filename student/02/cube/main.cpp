#include <iostream>

using namespace std;

int main()
{
    int factor=0;
    int result=0;
    cout << "Enter a number: ";
    cin >> factor;
    result = factor * factor * factor;
    if (factor==0 || result/(factor*factor)==factor){
        cout << "The cube of " << factor << " is " << result <<".";
    } else {
        cout << "Error! The cube of " << factor << " is not " << result << ".";
    }
    return 0;

}
