#include <iostream>
using namespace std;

float findAverage(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    float average = (float)sum / n;
    return average;
}

int main()
{
    int n;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    float avg = findAverage(arr, n);

    cout << "Average value = " << avg << endl;

    return 0;
}

