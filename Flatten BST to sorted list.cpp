vector<int> inorder(Node* root) {
    vector<int> result;

    if (root != nullptr) {
      
        vector<int> left = inorder(root->left);
        result.insert(result.end(), left.begin(), left.end());

        result.push_back(root->data);

        vector<int> right = inorder(root->right);
        result.insert(result.end(), right.begin(), right.end());
    }

    return result;
}
Node* n(vector<int> v) {
    if (v.empty()) {
        return nullptr;
    }

    Node* root = new Node(v[0]);
    Node* current = root;

    for (int i = 1; i < v.size(); i++) {
        Node* newNode = new Node(v[i]);
        current->right = newNode;
        current = newNode;
    }

    return root;
}

    Node *flattenBST(Node *root)
    {
     vector<int>v=inorder(root);
     return n(v);
    }
