   int smallestSubstring(string S) {
        // Code here 
        // We generally know map does not work properly for strings ,so if we use vector instead of map it works 
        // fine with same concept.
        // Sliding window concept 
        
        //unordered_map<char,int>mp;
        vector<int>mp(3,0);
        int i=0,j=0,ans=INT_MAX;
        while(j<S.size()){
            mp[S[j]-'0']++;
            while(mp[0]&& mp[1] && mp[2]){
                ans=min(ans,j-i+1);
                mp[S[i]-'0']--;
                i++;
            }
            j++;
        }
        return ans==INT_MAX?-1:ans;
    }
