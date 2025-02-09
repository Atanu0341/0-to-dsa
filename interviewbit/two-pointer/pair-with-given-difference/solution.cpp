// brute force
// O(n^2) time complexity
// O(1) space complexity
/*
int Solution::solve(vector<int> &A, int B) {
    for (int i = 0; i < A.size(); i++) {
        for (int j = i + 1; j < A.size(); j++) {
            if (abs(A[i] - A[j]) == B) {
                return 1;
            }
        }
    }
    return 0;
}
*/

// Better solution
// O(NLogN) time complexity
// O(1) space complexity
/*
int binarySearch(const vector<int>& A, int x) {
    int s = 0;
    int e = A.size() - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (A[mid] == x) return mid;         // Element found at mid index.
        else if (A[mid] > x) e = mid - 1;    // Search in left half.
        else s = mid + 1;                    // Search in right half.
    }
    return -1; // Element not found.
}

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    sort(A.begin(), A.end());  // Sort the array (O(n log n))

    // Iterate through each element in the sorted array
    for (int i = 0; i < n; i++) {
        int target1 = A[i] + B;  // Check for A[i] + B
        int target2 = A[i] - B;  // Check for A[i] - B
        
        // Perform binary search to check if target1 or target2 exists in the array
        int x1 = binarySearch(A, target1);
        int x2 = binarySearch(A, target2);

        // Check if binary search was successful and the found element is not at the same index as i
        if ((x1 != -1 && x1 != i) || (x2 != -1 && x2 != i)) {
            return 1;  // Return 1 if a valid pair is found
        }
    }

    return 0;  // Return 0 if no valid pair is found
}
*/

// Optimal solution
// O(N) time complexity
// O(N) space complexity
int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    
    int start = 0, end = 1, n = A.size();
    
    if(B<0){
        B = B * -1;
    }
    
    while(end<n){
        if(A[end]-A[start]==B) return 1;
        else if(A[end]-A[start]<B) end++;
        else start++;
        
        if(start==end) end++;
    }
    return 0;
}

