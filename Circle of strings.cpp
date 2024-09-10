void dfs(int node, vector<int>&vis, vector<int>adj[]) {
        vis[node] = 1;
        for(auto it: adj[node])  {
            if(!vis[it]) {
                dfs(it,vis,adj);
            }
        }
    }
    int isCircle(vector<string> &arr) {
       vector<int>adj[26];
       vector<int>indeg(26,0);
       vector<int>outdeg(26,0);
       for(int i=0;i<arr.size();i++) {
           string temp = arr[i];
           int u = temp[0]-'a';
           int v = temp[temp.size()-1]-'a';
           adj[u].push_back(v);
           outdeg[u]++;
           indeg[v]++;
       }
       // check indeg & outdeg
       for(int i=0;i<26;i++) {
           if(indeg[i]!=outdeg[i]) return 0;
       }
       vector<int>vis(26,0);
       dfs(arr[0][0]-'a', vis, adj);
       // check belonging to same component or not
       for(int i=0;i<26;i++) {
           if(indeg[i] && !vis[i]) {
               return 0;
           }
       }
       return 1;
    }
