#include <iostream>
using namespace std;
// O(n2)  -> n square
// int equalSum(int arr[], int n)
// {
//     for(int i = 0; i<n-1; i++){
//         int sum1 = 0, sum2 = 0;
//         for(int j = 0; j<=i; j++){
//             sum1 += arr[j];
//         };

//         for(int j = i+1; j<n; j++){
//             sum2 += arr[j];
//         };

//         if(sum1 == sum2) return 1;
//     }
//     return 0;
// }



// O(n) 

int equalSum(int arr[], int n){
    int totalSum = 0;

    for(int i = 0; i<n; i++){
        totalSum += arr[i];

        int prefix = 0;
    
        for(int i = 0; i<n-1; i++){
            prefix += arr[i];
    
            int ans = totalSum - prefix;
    
            if(ans == prefix) return 1;
    
    
        }
    }

    return 0;
}

int main()
{
    int arr[] = {3,4,-2,5,8,20,-10,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Equal sum partition exists: " << equalSum(arr, n) << endl;

    return 0;
}
