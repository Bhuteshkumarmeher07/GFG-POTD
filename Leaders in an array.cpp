    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        int max_element = INT_MIN;
        
        for(int i = n-1; i>= 0; i--)
        {
            if(a[i] >= max_element)
            {
                max_element = a[i];
                ans.push_back(a[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
