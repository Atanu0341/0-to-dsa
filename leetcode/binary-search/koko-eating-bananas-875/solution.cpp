// Leetcode Solution

/*
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 0, end = 0, mid, ans, n = piles.size();
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            sum += piles[i];
            end = max(end, piles[i]);
        }

        start = sum/h;

        if(!start){
            start = 1;
        }

        while (start <= end) {
            mid = start + (end - start) / 2;
            // amount of bananas to consume in 1 hour
            int total_time = 0;
            for (int i = 0; i < n; i++) {
                total_time += piles[i] / mid;

                if (piles[i] % mid) {
                    total_time++;
                }
            }

            if (total_time > h) {
                start = mid + 1;
            } else {
                ans = mid;
                end = mid - 1;
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

int minEatingSpeed(vector<int>& piles, int h) {
    int start = 0, end = 0, mid, ans, n = piles.size();
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += piles[i];
        end = max(end, piles[i]);
    }

    start = sum/h;

    if(!start){
        start = 1;
    }

    while (start <= end) {
        mid = start + (end - start) / 2;
        // amount of bananas to consume in 1 hour
        int total_time = 0;
        for (int i = 0; i < n; i++) {
            total_time += piles[i] / mid;

            if (piles[i] % mid) {
                total_time++;
            }
        }

        if (total_time > h) {
            start = mid + 1;
        } else {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> piles = {3,6,7,11};
    int h = 8;
    cout << minEatingSpeed(piles, h) << endl;
    return 0;
}
