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


void operators(string input)
{
    int count = 1;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
            input[i] == '/' || input[i] == '%' || input[i] == '=')
        {
            cout << "Operator " << count << " = " << input[i] << endl;
            count++;
        }
    }
}


void checkComment(string input)
{
    if (input[0] == '/' && input[1] == '/')
        cout << "// Single line comment" << endl;

    else if (input[0] == '/' && input[1] == '*' &&
             input[input.length() - 2] == '*' && input[input.length() - 1] == '/')
        cout << "/* Multiple line comment */" << endl;

    else
        cout << "It is not a comment" << endl;
}

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

float findAverage(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    float average = (float)sum / n;
    return average;
}


int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}


void makeFullName(string first, string last)
{
    string fullName = first + " " + last;
    cout << "Full Name = " << fullName << endl;
}

int main()
{
    int choice;
    char again;

    do
    {
        cout << "Choose an Operation"<<endl;
        cout << "1. Check Numeric Constant\n";
        cout << "2. Detect Operators\n";
        cout << "3. Check Comment\n";
        cout << "4. Check Identifier\n";
        cout << "5. Find Average of Array\n";
        cout << "6. Find Min & Max of Array\n";
        cout << "7. Make Full Name\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice)
        {
        case 4:
        {
            string input;
            cout << "Enter input: ";
            cin >> input;
            isIdentifier(input);
            break;
        }

        case 1:
        {
            string input;
            cout << "Enter input: ";
            cin >> input;
            if (checkNumeric(input))
                cout << "Numeric constant" << endl;
            else
                cout << "Not numeric" << endl;
            break;
        }

        case 2:
        {
            string input;
            cout << "Enter an expression: ";
            cin >> input;
            operators(input);
            break;
        }

        case 3:
        {
            string input;
            cout << "Enter a line: ";
            getline(cin, input);
            checkComment(input);
            break;
        }

        case 5:
        {
            int n, arr[100];
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter " << n << " elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            float avg = findAverage(arr, n);
            cout << "Average value = " << avg << endl;
            break;
        }

        case 6:
        {
            int n, arr[100];
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter " << n << " elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            int minimum = findMin(arr, n);
            int maximum = findMax(arr, n);

            cout << "Minimum value = " << minimum << endl;
            cout << "Maximum value = " << maximum << endl;
            break;
        }

        case 7:
        {
            string firstName, lastName;
            cout << "Enter first name: ";
            cin >> firstName;
            cout << "Enter last name: ";
            cin >> lastName;
            makeFullName(firstName, lastName);
            break;
        }

        default:
            cout << "Invalid choice! Please try again.\n";
        }

        cout << "\nDo you want to perform another operation?: ";
        cin >> again;
        cin.ignore();

    } while (again == 'y' || again == 'Y');

    cout << "Program ended. Goodbye!"<<endl;
    return 0;
}
