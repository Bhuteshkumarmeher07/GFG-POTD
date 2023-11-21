    bool rec(Node *left, Node *right){
        return (!left && !right)||(left && right && (left->data==right->data)&&rec(left->left,right->right)&&rec(left->right,right->left));
    }
    bool isSymmetric(struct Node* root){
	    return !root||rec(root,root);
	    
    }
