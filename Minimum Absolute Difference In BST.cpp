void inordertraversal(Node*root,vector<int>&res)
    {
        if(root==NULL)
        {
            return ;
        }
        
        inordertraversal(root->left,res);
        res.push_back(root->data);
        inordertraversal(root->right,res);
        
    }
    int absolute_diff(Node *root)
    {
       vector<int>res;
        int diff = INT_MAX;
        inordertraversal(root,res);
        sort(res.begin(),res.end());
        
        for(int i = 0; i < res.size() - 1; i++) 
        {
            diff = min(diff, res[i+1] - res[i]);
        }
        
        return diff;
    }
