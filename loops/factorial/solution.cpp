#include <iostream>
using namespace std;

int main()
{
    int num, factorial = 1;
    cout << "Enter number : ";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}