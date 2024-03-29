bool isIdentical(Node *r1, Node *r2) {
    // If both trees are empty, return true
    if (r1 == NULL && r2 == NULL)
        return true;

    // If both trees are not empty, check data of the nodes 
    // and their children's nodes
    if (r1 != NULL && r2 != NULL) {
        return (
            r1->data == r2->data &&
            isIdentical(r1->left, r2->left) &&
            isIdentical(r1->right, r2->right)
        );
    }

    // If none of the above conditions is true, return false
    return false;
}
