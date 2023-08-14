    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> v;
        map<int,int> mp;
        for(int i=0; i<nums.size();i++) // sare number ko unke freq. k sath store kar raha hun
        {
            mp[nums[i]]++;
        }
        for(auto it: mp)
        {
            if(it.second == 1) // jiska v freq. 1 hai woh non repeating hai 
            {
                v.push_back(it.first);
            }
        }
        if(v[0] > v[1]) // decending order mai output de raha 
        {
            swap(v[0], v[1]);
        }
        return v;
    }
