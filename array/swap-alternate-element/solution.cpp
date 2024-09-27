#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}   

void swapAlternate(int arr[], int size) {
    for(int i = 0; i < size; i+=2) {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {
    int even[6] = {5,9,4,7,3,2};
    int odd[5] = {11,33,9,76,43};

    swapAlternate(even, 6);

    printArray(even, 6);
    
    
    return 0;
}