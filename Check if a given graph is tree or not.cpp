void dfs(int i,int vis[],vector<int>adj[]){
        if(vis[i]==1){
            return ;
        }
        vis[i] =1;
        for(auto it:adj[i]){
            dfs(it,vis,adj);
        }
        
    }
int isTree(int n, int m, vector<vector<int>> &adj) {
        int vis[n]={0};
        vector<int>adj2[n];
        for(int i=0;i<m;i++){
            adj2[adj[i][0]].push_back(adj[i][1]);
            adj2[adj[i][1]].push_back(adj[i][0]);
        }
        int ct =0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                ct++;
                dfs(i,vis,adj2);
            }
        }
        if(ct>1){
            return 0;
        }
        return n-1==m;
    }
