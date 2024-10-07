// LeetCode Solution

/*
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1, mid, index = nums.size();

        while(start<=end){
            mid = start+(end-start)/2;

            if(nums[mid]==target){
                index = mid;
                break;
            }else if(nums[mid]>target){
                index = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }

        return index;
        
    }
};
*/

// Standalone Implementation

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int start = 0, end = nums.size()-1, mid, index = nums.size();

    while(start<=end){
        mid = start+(end-start)/2;

        if(nums[mid]==target){
            index = mid;
            break;
        }else if(nums[mid]>target){
            index = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return index;
    
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 4;

    cout << searchInsert(nums, target) << endl;

    return 0;
}
