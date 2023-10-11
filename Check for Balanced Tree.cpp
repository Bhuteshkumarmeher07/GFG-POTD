    bool flag = true;
    int solve(Node * root){
        if(root == NULL){
            return 0;
        }
        int left = solve(root->left);
        int right = solve(root->right);
        if(abs(left-right)>1) flag = false;
        return max(left, right)+1;
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root){
        solve(root);
        return flag;
    }
