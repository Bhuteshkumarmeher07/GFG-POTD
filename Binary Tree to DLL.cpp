    Node *head = NULL, *prev = NULL;
    void help(Node *root){
        if(!root) return;
        help(root->left);
        // root
        if(!head)  head = root;
        if(prev)  prev->right = root;
        root->left = prev;
        prev = root;
        help(root->right);
    }
    Node* bToDLL(Node* root) {
        // code here
        help(root);
        return head;
    }
