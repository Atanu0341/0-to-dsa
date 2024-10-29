// LeetCode Solution

/*
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int start = 0, end = 0, mid, ans;

        for (int i = 0; i < n; i++) {
            start = max(start, weights[i]);
            end += weights[i];
        }

        while (start <= end) {
            mid = start + (end - start) / 2;

            int loads = 0, count = 1;

            for (int i = 0; i < n; i++) {
                loads += weights[i];

                if (loads > mid) {
                    count++;
                    loads = weights[i];
                }
            }
            if (count <= days) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
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

int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();

    int start = 0, end = 0, mid, ans;

    for (int i = 0; i < n; i++) {
        start = max(start, weights[i]);
        end += weights[i];
    }

    while (start <= end) {
        mid = start + (end - start) / 2;

        int loads = 0, count = 1;

        for (int i = 0; i < n; i++) {
            loads += weights[i];

            if (loads > mid) {
                count++;
                loads = weights[i];
            }
        }
        if (count <= days) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout << shipWithinDays(weights, days) << endl;
    return 0;
}
