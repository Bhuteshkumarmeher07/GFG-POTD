 vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int> ans;
            int n = text.length();
            int m = pattern.length();
            if(m>n) return {};
            if(pattern == text) return {1};
            for(int i = 0; i < n-m+1 ; i++){
                string temp = text.substr(i,m);
                if(temp == pattern) ans.push_back(i+1);
            }
            return ans;
        }
