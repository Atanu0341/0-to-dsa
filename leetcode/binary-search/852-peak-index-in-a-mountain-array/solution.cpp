// LeetCode Solution

/*
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // binary search
        int start = 0, end = arr.size() - 1, mid;

        while (start <= end) {
            mid = end + (start - end) / 2;

            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            } else if (arr[mid] > arr[mid - 1]) {
                start = mid + 1;
            } else {
                end = mid - 1; //arr[mid-1]>arr[mid]
            }
        }
        return -1;
    }
};
*/

// Standalone Implementation

#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0, end = arr.size() - 1, mid;

    while (start <= end) {
        mid = end + (start - end) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        } else if (arr[mid] > arr[mid - 1]) {
            start = mid + 1;
        } else {
            end = mid - 1; //arr[mid-1]>arr[mid]
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2,4,6,8,10,8,5};
    cout << peakIndexInMountainArray(arr) << endl;
    return 0;
}
