    bool iscycle(int u,vector<bool>&vis,vector<bool>&rec,vector<int>adj[],stack<int>&st){
      vis[u]=true;
      rec[u]=true;
      for(auto &v:adj[u]){
          if(!vis[v] && iscycle(v,vis,rec,adj,st)) return true;
          if(rec[v]==true) return true;
      }
      rec[u]=false;
      st.push(u);
      return false;
      
    }
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
         //code here
        vector<int>adj[n+1];
        for(auto &x:prerequisites){
            adj[x[1]].push_back(x[0]);
        }
        vector<bool>vis(n,false);
        vector<bool>rec(n,false);
        stack<int>st;
        for(int i=0;i<n;i++){
            if(!vis[i]&& iscycle(i,vis,rec,adj,st)) return {};
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
