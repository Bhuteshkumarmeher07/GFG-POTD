    string printMinNumberForPattern(string S){
        // code here
        int n = S.size();
        string ans(n+1, ' ');
        int cnt = 1;
        for(int i=0; i<= n; i++)
        {
            if(i==n || S[i] == 'I')
            {
                for(int j = i-1; j >= -1; j--)
                {
                    ans[j+1] = char('0' + cnt);
                    cnt++;
                    if(j >= 0 && S[j] == 'I')
                    {
                        break;
                    }
                }
            }
        }
        return ans;
    }
