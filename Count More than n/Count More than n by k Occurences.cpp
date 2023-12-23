    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int appears = n/k;
        int cnt=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i : mp){
            if(i.second > appears){
                cnt++;
            }
        }
        return cnt;
    }
