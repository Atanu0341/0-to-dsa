#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int last = 0;
    int pre = 1;
    int curr = 1;
    cout << "Enter the number ";
    cin >> n;
    if (n == 1)
    {
        cout << last;
        return 0;
    }
    for (i = 3; i <= n; i++)
    {
        curr = pre + last;
        last = pre;
        pre = curr;
    }
    cout << curr;
};