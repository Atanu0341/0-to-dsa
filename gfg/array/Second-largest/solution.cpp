int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        
        
        int first = arr[0], second = -1;
        
        for(int i = 1 ; i<n; i++){
            if(arr[i]>first){
                second=first;
                first=arr[i];
            }else if (arr[i] < first && arr[i]> second){
                second = arr[i];
            }
        }
        
        return second;
        
    }