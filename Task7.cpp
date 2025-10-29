#include <iostream>
using namespace std;


void makeFullName(string first, string last)
{
    string fullName = first + " " + last;
    cout << "Full Name = " << fullName << endl;
}

int main()
{
    string firstName, lastName;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    makeFullName(firstName, lastName);

    return 0;
}

