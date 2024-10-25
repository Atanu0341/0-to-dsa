#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;  // Update mid inside the loop

        if (arr[mid] == target) {
            return mid;  // Return index if target is found
        }

        if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return -1;  // Return -1 if target is not found
}

int main() {
    int arr[4] = {12,34,67,90};

    int target;

    cout << "Array is :" << endl;
    for (int i = 0; i < 10; i++) {  // Updated loop to print the whole array
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the target element: " << endl;
    cin >> target;

    int index = binarySearch(arr, 10, target);
    
    if (index != -1) {
        cout << "Index of target element is: " << index << endl;
    } else {
        cout << "Target element not found." << endl;
    }

    return 0;
}
