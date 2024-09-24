#include<iostream>
using namespace std;

int search(int arr[], int size, int num){
    for(int i=0; i<size; i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main() {
    int size, num, arr[100];

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the number to search: ";
    cin >> num;

    cout << "Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int index = search(arr, size, num);

    cout << "Index of " << num << " is " << index << endl;

    return 0;
}