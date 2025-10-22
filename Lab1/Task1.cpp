#include <iostream>
using namespace std;

bool checkNumeric(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (!(input[i] >= '0' && input[i] <= '9'))
            return false;
    }
    return true;
}

int main()
{
    string input;
    cout << "Enter input: ";
    cin >> input;

    if (checkNumeric(input))
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}

