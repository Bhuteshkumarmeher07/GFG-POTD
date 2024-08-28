static bool func(pair<int,int> &a, pair<int,int> &b){
        if(a.second > b.second) return true;
        else if(a.second < b.second) return false;
        else return a.first < b.first;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        unordered_map<int,int> mp;
        vector<pair<int,int>> vec;
        vector<int> ans;
        
        for(auto x:arr){
            mp[x]++;
        }
        for(auto x:arr){
            vec.push_back({x,mp[x]});
        }
        sort(vec.begin(), vec.end(), func);
        for(auto x:vec){
            ans.push_back(x.first);
        }
        return ans;
    }
