long long sumSubstrings(string s){
        
        // your code here
        int n = s.size();
        long long ans = 0, prev = 0, mod = 1e9+7;
        for(int i=0; i<n; i++){
            long long curr = (prev*10)%mod + (s[i] - '0') * (i+1)%mod;
            prev = curr;
            ans = (ans + curr)% mod;
        }
        return ans;
