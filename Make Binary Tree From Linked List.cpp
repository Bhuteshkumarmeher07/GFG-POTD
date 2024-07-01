void convert(Node *head, TreeNode *&root) {
    // Your code here
    root=new TreeNode(head->data);
    head=head->next;
    queue<TreeNode*>q;
    q.push(root);
    while(head){
        TreeNode* temp=q.front();
        q.pop();
        temp->left=new TreeNode(head->data);
        q.push(temp->left);
        head=head->next;
        if(head) {
            temp->right=new TreeNode(head->data);
            head=head->next;
        }
        if(temp->right) q.push(temp->right);
    }
        return;
}
