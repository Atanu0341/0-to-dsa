// LeetCode Solution

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1, mid;

        while(start<=end){
            mid = start + (end-start)/2;

            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>=nums[0]){  // left side sorted condition
                if(nums[start]<=target && target<=nums[mid]){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }else{  // right side sorted condition
                if(nums[mid]<=target && target<=nums[end]){
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
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

int search(vector<int>& nums, int target) {
    int start = 0, end = nums.size()-1, mid;

    while(start<=end){
        mid = start + (end-start)/2;

        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>=nums[0]){  // left side sorted condition
            if(nums[start]<=target && target<=nums[mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }else{  // right side sorted condition
            if(nums[mid]<=target && target<=nums[end]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int index = search(nums, target);

    cout << "Index of target " << target << " is " << index << endl;

    return 0;
}

