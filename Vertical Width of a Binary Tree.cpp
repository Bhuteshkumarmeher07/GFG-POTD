void solve(Node* root, int curr, int &mn, int &mx){
        if(root == NULL) return;
        mn = min(mn, curr);
        mx = max(mx, curr);
        
        solve(root->left, curr-1, mn, mx);
        solve(root->right, curr+1, mn, mx);
    }
    int verticalWidth(Node* root) {
        // code here
        if(root == NULL) return 0;
        int mx = -1e9, mn = 1e9;
        solve(root, 0, mn, mx);
        return mx - mn + 1;
    }
