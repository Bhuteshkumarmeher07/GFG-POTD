    Node* concatenate(Node* leftList, Node* rightList) {
        if (leftList == NULL)
            return rightList;
        if (rightList == NULL)
            return leftList;

        Node* leftLast = leftList->left;
        Node* rightLast = rightList->left;

        leftLast->right = rightList;
        rightList->left = leftLast;

        leftList->left = rightLast;
        rightLast->right = leftList;

        return leftList;
    }
    //Function to convert binary tree into circular doubly linked list.
    Node *bTreeToCList(Node *root)
    {
    //add code here.
    if (root == NULL)
            return NULL;

        Node* left = bTreeToCList(root->left);
        Node* right = bTreeToCList(root->right);

        root->left = root->right = root;

        return concatenate(concatenate(left, root), right);
    
    }
