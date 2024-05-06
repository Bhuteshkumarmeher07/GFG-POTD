void helper(Node * root,vector<int> & ans){
    if(!root) return ;
    
    if(!root->left and !root->right) return ;
    
    if(!root->left and root->right) ans.push_back(root->right->data);
    else if (!root->right and root->left) ans.push_back(root->left->data);
    
    helper(root->left,ans);
    helper(root->right,ans);
}

vector<int> noSibling(Node* node)
{
    // code here
    vector<int> ans;
    helper(node,ans);
    sort(ans.begin(),ans.end());
    if(ans.empty()) return {-1};
    return ans;
}
