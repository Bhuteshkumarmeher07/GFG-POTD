int findPeakElement(vector<int>& a) 
    {
        // Code here.
        // return *max_element(a.begin(), a.end());
        int n = a.size();
        int start = 0;
        int end = n - 1;
        
        while(start < end){
            int mid = start + (end - start)/2;
            
            if(a[mid] > a[mid+1]){
                end = mid;
            }
            else{
                start = mid + 1;
            }
        }
        return a[start];
    }
