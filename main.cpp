#include<iostream>
using namespace std;

int main() {
    int arr[10];

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

    cout << "The array elements are: ";
    for(int i=0; i<10; i++){
        cout << arr[i];
        if(i < 9) cout << ", ";
    }
    cout << endl;

    return 0;
}