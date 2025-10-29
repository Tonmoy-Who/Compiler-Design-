#include <iostream>
using namespace std;

void isIdentifier(string input)
{

    if (!((input[0] >= 'A' && input[0] <= 'Z') ||
          (input[0] >= 'a' && input[0] <= 'z') ||
           input[0] == '_'))
    {
        cout << "It is not a valid identifier" << endl;
        return;
    }


    for (int i = 1; input[i] != '\0'; i++)
    {
        if (!((input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= '0' && input[i] <= '9') ||
               input[i] == '_'))
        {
            cout << "It is not a valid identifier" << endl;
            return;
        }
    }

    cout << "It is a valid identifier" << endl;
}

int main()
{
    string input;

    cout << "Enter an input: ";
    cin >> input;

    isIdentifier(input);

    return 0;
}

