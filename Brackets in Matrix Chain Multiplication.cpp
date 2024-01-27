    pair<int,string> helper(int i,int j,int p[],map<int,string>&m,vector<vector<int>>&dpforInt,vector<vector<string>>&dpforStr)
    {
        
        if(j-i==0)
        {
            return {0,m[i]};
        }
        else if(j-i==1)
        {
            return {p[i]*p[i+1]*p[j+1],"("+m[i]+m[j]+")"};
        }
        else
        {
            if(dpforInt[i][j]!=-1)
            {
                return {dpforInt[i][j],dpforStr[i][j]};
            }
            int ans=INT_MAX;
            string str="";
            for(int k=i;k<=j-1;k++)
            {
                pair<int,string>p1=helper( i, k, p, m,dpforInt,dpforStr);
                pair<int,string>p2=helper( k+1, j, p, m,dpforInt,dpforStr);
                int temp=p[i]*p[k+1]*p[j+1];
                if(temp+p1.first+p2.first<ans)
                {
                    ans=temp+p1.first+p2.first;
                    str="("+p1.second+p2.second+")";
                }
            }
            dpforInt[i][j]=ans;
            dpforStr[i][j]=str;
            return {ans,str};
        }
    }
    string matrixChainOrder(int p[], int n){
        map<int,string>m;
        string str="A";
        for(int i=0;i<=n-2;i++)
        {
            
            if(i!=0)
            {
                str[0]++;
            }
            m[i]=str;
        }
        vector<vector<int>>dpforInt(n+1,vector<int>(n+1,-1));
        vector<vector<string>>dpforStr(n+1,vector<string>(n+1,""));
        return helper(0,n-2, p,m,dpforInt,dpforStr).second ;
    }
