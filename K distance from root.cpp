void solve(vector<int>&ans,struct Node *root,int k){
        if(k==0){
            ans.push_back(root->data);
        }
        if(root->left){
            solve(ans,root->left,k-1);
        }
        if(root->right){
            solve(ans,root->right,k-1);
        }
    }
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
      vector<int>ans;
      solve(ans,root,k);
      return ans;
    }
