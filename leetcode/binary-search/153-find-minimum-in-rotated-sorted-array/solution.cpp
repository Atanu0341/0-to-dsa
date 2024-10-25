// LeetCode Solution

/*
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1, mid, ans=nums[0];

        while(start<=end){
            mid = start + (end-start)/2;

            if(nums[mid]>=nums[0]){ // or nums[mid]==nums[0]
                start = mid+1; 
                
            }else{  // nums[mid]<nums[0]
                ans = nums[mid];
                end = mid-1;
            }
        }
        return ans;
    }
};
*/

// Standalone Implementation

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMin(vector<int>& nums) {
    int start = 0, end = nums.size()-1, mid, ans=nums[0];

    while(start<=end){
        mid = start + (end-start)/2;

        if(nums[mid]>=nums[0]){ // or nums[mid]==nums[0]
            start = mid+1; 
            
        }else{  // nums[mid]<nums[0]
            ans = nums[mid];
            end = mid-1;
        }
    }
    return ans;
}


int main() {
    vector<int> nums = {3,4,5,1,2};
    cout << findMin(nums) << endl;
    return 0;
}


