#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;

        for(int j = i+1; j<n; j++){
            if(arr[j]>arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}


int main() {
    int arr[6] = {10,4,1,3,2,7};

    cout<<"Before sorting: "<<endl;
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selectionSort(arr, 6);

    cout<<"After sorting (Decreasing Order) : "<<endl;
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}