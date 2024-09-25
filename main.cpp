#include<iostream>
using namespace std;

void func(int a[], int n){

    cout<<sizeof(a)<<endl;

    for (int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    int arr[5] = {1,2,3,5,6};

    cout<<sizeof(arr)<<endl;

    func(arr, 5);
    
    return 0;
}