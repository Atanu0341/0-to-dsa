// LeetCode Solution

/*
class Solution {
public:
    int mySqrt(int x) {

        if(x<2){
            return x;
        }

        int start = 0, end = x, mid, ans;


        while(start<=end){
            mid = start+(end-start)/2;

            if(mid==x/mid){
                return mid;
            }else if(mid<x/mid){
                ans = mid;
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }

        return ans;   
    }
};
*/

// Standalone Implementation

#include <iostream>

using namespace std;

int mySqrt(int x) {

    if(x<2){
        return x;
    }

    int start = 0, end = x, mid, ans;


    while(start<=end){
        mid = start+(end-start)/2;

        if(mid==x/mid){
            return mid;
        }else if(mid<x/mid){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return ans;   
}


int main() {
    cout << mySqrt(4) << endl;
    cout << mySqrt(50) << endl;
    return 0;
}
