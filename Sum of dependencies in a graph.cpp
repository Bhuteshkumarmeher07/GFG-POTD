    int sumOfDependencies(vector<int> adj[], int V) {
        // code here
        int ans=0;
        for(int i=0;i<V;i++){
            for(auto x:adj[i]){
                ans++;
            }
        }
        return ans;
    }
