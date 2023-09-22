int searchFirst(int arr[],int start,int end,int x) {
        int ans = -1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(arr[mid] == x) {
                ans = mid;
                end = mid-1;
            } else if(arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid-1;
            }
        }
        return ans;
    }
    
    int searchLast(int arr[],int start,int end,int x) {
        int ans = -1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(arr[mid] == x) {
                ans = mid;
                start = mid+1;
            } else if(arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid-1;
            }
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x)
    {
        vector<int>ans;
        int first = searchFirst(arr,0,n-1,x);
        int last = searchLast(arr,0,n-1,x);
        
        ans.push_back(first);
        ans.push_back(last);
        
        return ans;
    }
