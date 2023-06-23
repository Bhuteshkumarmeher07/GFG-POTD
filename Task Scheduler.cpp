    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        int charFrq[26] = {0};
        int mxfrq = 0;
        
        for(int i = 0; i<N; i++)
        {
            charFrq[tasks[i] - 'A']++;
            mxfrq = max(mxfrq, charFrq[tasks[i] - 'A']);
        }
        int mxctr = 0;
        
        for(int i=0; i<26; i++)
        {
            if(charFrq[i] == mxfrq)
            {
                mxctr++;
            }
        }
        
        int ans = (mxfrq - 1) * (K+1) + mxctr;
        ans = max(ans, N);
        
        return ans;
    }
