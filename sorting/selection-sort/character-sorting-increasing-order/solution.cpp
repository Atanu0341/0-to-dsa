#include<iostream>
using namespace std;

void selectionSort(char arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;

        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}


int main() {
    char arr[6] = {'b','e','d','f','a','c'};

    cout<<"Before sorting: "<<endl;
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selectionSort(arr, 6);

    cout<<"After sorting: "<<endl;
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}