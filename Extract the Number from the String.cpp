#define ll long long
  public:
    long long ExtractNumber(string s) {
        ll n = s.length(), ans = -1;
        for(ll i = 0, temp = 0, f = 1; i<n; ++i, f = 1, temp = 0)
        {
            if(s[i]>'9' || s[i]<'0') f = 0;
            while(i<n && s[i]<='9' && s[i]>='0')
            {
                if(s[i]=='9') f = 0;
                temp *= 10, temp += (s[i++]-'0');
            }
            if(f) ans = max(ans, temp);
        }
        return ans;
    }
