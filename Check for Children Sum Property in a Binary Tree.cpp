//Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int helper(Node* root){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->data;
        
        int left = helper(root->left);
        if(left==-1) return -1;
        int right = helper(root->right);
        if(right==-1) return -1;
        
        if(root->data == left+right){
            return root->data;
        }
        return -1;
    }
    int isSumProperty(Node *root)
    {
        return helper(root)==-1?0:1;
    }
