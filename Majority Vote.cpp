vector<int> findMajority(vector<int>& nums) 
    {
        map<int,int> mp;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto &itr : mp)
        {
            if(itr.second > n/3)
                ans.push_back(itr.first);
        }
        if(ans.size() == 0)
        {
            ans = {-1};
        }
        return ans;
        // Your code goes here.
    }
