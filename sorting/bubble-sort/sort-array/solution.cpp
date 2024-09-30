#include<iostream>
using namespace std;

/*
Worst case O(n^2)

void bubbleSort(int arr[], int n){
    for(int i = n-2; i>=0; i--){
        for(int j = 0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
*/

// Best case O(n)

void bubbleSort(int arr[], int n){
    for(int i = n-2; i>=0; i--){
        bool swaped = 0;
        for(int j = 0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaped = 1;
            }
        }

        if(swaped == 0)
        break;
    }
}

int main() {
    int arr[6] = {10,4,1,3,2,7};

    cout<<"Before sorting: "<<endl;
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort(arr, 6);

    cout<<"After sorting: "<<endl;
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}