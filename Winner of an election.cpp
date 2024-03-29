    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        vector<string> ans;
        unordered_map<string, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        int mx = 0;
        for(auto it: mp){
            mx = max(mx, it.second);
        }
        set<string> st;
        for(auto it: mp){
            if(it.second == mx)
                st.insert(it.first);
        }
        auto it = st.begin();
        ans.push_back(*it);
        ans.push_back(to_string(mx));
        return ans;
    }
