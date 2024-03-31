void solve(Node* root, int n, int &ans)
    {
        if(root==NULL)return;
        if(root->key==n)
        {
            ans =  root->key;
        }
        if(root->key>n)
        {
             solve(root->left, n, ans);
        }
        if(root->key<n)
        {
            ans = max(ans, root->key);
            solve(root->right, n, ans);
        }
    }
    int findMaxForN(Node* root, int n) {
        int ans = -1;
        solve(root, n, ans);
        return ans;
    }
