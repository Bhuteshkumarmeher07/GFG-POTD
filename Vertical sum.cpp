map<int, int> mp;
    
    void solve(Node* node, int cur){
        
        if(!node)return;
        
        mp[cur] += node->data;
        
        solve(node->left, cur - 1);
        
        solve(node->right, cur + 1);
        
    }
    vector <int> verticalSum(Node *root) {
        
        solve(root, 0);
        
        vector<int> ans;
        
        for(auto it: mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
