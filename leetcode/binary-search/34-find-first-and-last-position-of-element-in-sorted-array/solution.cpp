// LeetCode Solution

/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1, mid, first = -1, last = -1;

        // Find first occurrence

        while(start<=end){
            mid = start+(end-start)/2;

            if(nums[mid]==target){
                first = mid;
                end = mid-1;
            }else if (nums[mid]<target){
                start = mid+1;
            }else{
                end = mid - 1;
            }
        }

        // Find last occurrence
        start = 0, end = nums.size()-1;

        while(start<=end){
            mid = start+(end-start)/2;

            if(nums[mid]==target){
                last = mid;
                start = mid+1;
            }else if (nums[mid]<target){
                start = mid+1;
            }else{
                end = mid - 1;
            }
        }

        vector<int>a(2);
        a[0] = first;
        a[1] = last;
        return a;

        // return {first, last};
    }
};
*/

// Standalone Implementation

#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int start = 0, end = nums.size()-1, mid, first = -1, last = -1;

    // Find first occurrence

    while(start<=end){
        mid = start+(end-start)/2;

        if(nums[mid]==target){
            first = mid;
            end = mid-1;
        }else if (nums[mid]<target){
            start = mid+1;
        }else{
            end = mid - 1;
        }
    }

    // Find last occurrence
    start = 0, end = nums.size()-1;

    while(start<=end){
        mid = start+(end-start)/2;

        if(nums[mid]==target){
            last = mid;
            start = mid+1;
        }else if (nums[mid]<target){
            start = mid+1;
        }else{
            end = mid - 1;
        }
    }

    vector<int>a(2);
    a[0] = first;
    a[1] = last;
    return a;

    // return {first, last};
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = searchRange(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
