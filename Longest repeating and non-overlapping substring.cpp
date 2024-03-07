string longestSubstring(string s, int n) {
        int mx{}, l;
        string x = "-1", t;
        
        for(int i{}, j{}; i < n and j < n; ++j) {
            t = s.substr(i, j - i + 1);
            
            if(s.find(t, j + 1) != string::npos) {
                if(t.size() > mx) mx = t.size(), x = t;
            }
            
            else ++i;
        }
        
        return x;
}
