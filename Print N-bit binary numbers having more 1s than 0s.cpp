vector<string>ans; 
    void solve(int one, int zero , string s, int n){
        if(s.size()==n){
            ans.push_back(s); 
            return ;
        }
        if(one<=0 or zero<=0)return ; 
        string t = s; 
        t += '1';
        solve(one-1, zero,t,n);
        if(zero>one){
            string t= s; 
            t += '0'; 
            solve(one,zero-1,t,n); 
        }
    }
    vector<string> NBitBinary(int n)
    {
        // Your code goes here
        solve(n,n,"",n); 
        return ans; 
    }
