int minValue(string s, int k){
        // code here
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        vector<int> v;
        for(auto& i:m){
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        for(int i=0;i<k;i++){
            v[n-1]=v[n-1]-1;
            sort(v.begin(),v.end());
        }
        int res=0;
        for(auto i:v){
            res=res+i*i;
        }
        // cout<<res<<endl;
        return res;
    }
