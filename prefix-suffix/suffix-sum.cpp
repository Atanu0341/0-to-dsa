#include<iostream>
using namespace std;

int suffixSum(int arr[], int n) {
    for (int i = n-2; i >= 0; i--) {
        arr[i] += arr[i+1];
    }

    return arr[0];
}

int main() {
    int arr[] = {6, 4, 5, -3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Suffix sum of the array is: " << suffixSum(arr, n) << endl;

    return 0;
}

