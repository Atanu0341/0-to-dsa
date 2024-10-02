#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {  
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            } else {
                break;
            }
        }
    }
}

int main() {
    int arr[6] = {10, 4, 1, 3, 2, 7};

    cout << "Before sorting: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, 6);

    cout << "After sorting: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  

    return 0;
}
