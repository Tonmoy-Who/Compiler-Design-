#include <iostream>
using namespace std;

void checkComment(string input)
{
    if (input[0] == '/' && input[1] == '/')
        cout << "//single line comment" << endl;

    else if (input[0] == '/' && input[1] == '*' &&
             input[input.length() - 2] == '*' && input[input.length() - 1] == '/')
        cout << "/* Multiple line comment*/" << endl;

    else
        cout << "It is not a comment" << endl;
}

int main()
{
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    checkComment(input);

    return 0;
}

