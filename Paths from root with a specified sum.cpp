void solve(Node* root,int sum,vector<int>&temp,vector<vector<int>>&ans){
        if(root==NULL){
            return;
        }
        sum-=root->key;
        temp.push_back(root->key);
        if(sum==0){
            ans.push_back(temp);
        }
        solve(root->right,sum,temp,ans);
        solve(root->left,sum,temp,ans);
        temp.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {   
        vector<vector<int>>ans;
        vector<int>temp;
        solve(root,sum,temp,ans);
        return ans;
    }

