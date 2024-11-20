//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {
    // sort them in increasing order
    sort(stalls.begin(),stalls.end());
    
    int start = 1, end, mid, ans = 0, n = stalls.size();
    
    
    end = stalls[n-1]-stalls[0];
    
    while(start<=end){
        mid = start+(end-start)/2;
        
        int count = 1, position = stalls[0];
        
        for(int i = 1; i<n; i++){
            if(position+mid <= stalls[i]){
                count++;
                position = stalls[i];
            }
        }
        
        if(count<k){
            end = mid - 1;  // try for smaller distance
        }else{ // count>=k
            ans = mid;
            start = mid + 1;  // try for larger distance
        }
    }
    
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends