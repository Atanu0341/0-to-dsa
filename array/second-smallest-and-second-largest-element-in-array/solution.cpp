#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n)
{
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    return second;
}

int secondSmallest(int arr[], int n)
{
    int last = INT_MAX, secondLast = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < last)
        {
            secondLast = last;
            last = arr[i];
        }
        else if (arr[i] < secondLast && arr[i] != last)
        {
            secondLast = arr[i];
        }
    }
    return secondLast;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    if (n <= 3)
    {
        cout << "Size of the array should be greater than 3." << endl;
    }

    int arr[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The second largest element in the array is: " << secondLargest(arr, n) << endl;
    cout << "The second smallest element in the array is: " << secondSmallest(arr, n) << endl;

    return 0;
}


/*
first(INT_MIN), second(INT_MIN),      {10, 20, 4, 45, 99}  initially

0th iteration arr[0]=10
second(INT_MIN) {first(10),20,4,45,99}

1st iteration arr[1]=20
{second(10),first(20),4,45,99}

2nd iteration arr[2]=4
{second(10),first(20),4,45,99}

3rd iteration arr[3]=45
{10,second(20),4,first(45),99}

4th iteration arr[4]=99
{10,20,4,second(45),first(99)}

same for smallest with some minor changes

*/