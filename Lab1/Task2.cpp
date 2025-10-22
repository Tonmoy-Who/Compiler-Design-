#include<iostream>
using namespace std;

void operators(string input)
{
     int count = 1;
    for(int i=0;i<input.length();i++)
    {
        if(input[i] == '+' || input[i] == '-'||input[i] == '*'||input[i] == '/'||input[i] == '%'||input[i] == '=')
        {
            cout << "Operator " << count << " = " << input[i] << endl;
            count++;
        }
    }
}

int main()
{
    string input;
    cout<<"Enter an expression:";
    cin>>input;
    operators(input);
    return 0;
}
