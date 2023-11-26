    int SolveA(int n, vector<int> &ans)
    {
        ans.push_back(n);
        if (n <= 0)
        {
            return n;
        }
        SolveA(n - 5, ans);
    }
    void SolveB(int x, int n, vector<int> &ans)
    {
        if (x > n)
            return;
        ans.push_back(x);
        SolveB(x + 5, n, ans);
    }
    vector<int> pattern(int N){
        // code here
        if(N==0) return {0};
        vector<int> ans;
       int n =  SolveA(N, ans);
        SolveB(n + 5, N, ans);
        return ans;
    }
