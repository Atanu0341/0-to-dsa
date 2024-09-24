#include<iostream>
using namespace std;

int main() {
    int arr[5], sum=0;

    for(int i=0; i<5; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    
    cout << "The average of the array elements is: " << sum/5 << endl;

    return 0;
}