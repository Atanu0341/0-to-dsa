#include<iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {2, 5, 1, 3, 8};
    int ans = INT_MAX;

    for(int i = 0; i<5; i++){
        if(arr[i] < ans){
            ans = arr[i];
        }
    }

    cout << "The minimum element in the array is : " << ans << endl;


    return 0;
}

// or 

// int main() {
//     int arr[5] = {2, 5, 1, 3, 8};
//     int ans = arr[0];
// 
//     for(int i = 0; i<5; i++){
//         if(arr[i] < ans){
//             ans = arr[i];
//         }
//     }

//     cout << "The minimum element in the array is : " << ans << endl;


//     return 0;
// }
