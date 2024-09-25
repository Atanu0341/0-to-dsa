int missingNumber(int n, vector<int>& arr) {

        // Sum of all element in an array ---> i
        int sum = 0;
        
        for (int i = 0; i<n-1; i++){
            sum+=arr[i];
        }
        // Sum of n number ---- ii
        int ans = (n*(n+1))/2;
        
        // now subtract i and ii
        return ans-sum;
    }