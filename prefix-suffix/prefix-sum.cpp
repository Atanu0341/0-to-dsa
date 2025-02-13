#include <iostream>
using namespace std;

int prefixSum(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        arr[i]+=arr[i-1];
    }
    return arr[n-1];
}

int main()
{
    int arr[] = {6, 4, 5, -3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Prefix sum of the array is: " << prefixSum(arr, n) << endl;
    return 0;
}