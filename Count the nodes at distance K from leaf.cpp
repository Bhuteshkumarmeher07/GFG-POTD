void pkd(Node* root,int k,set<int> &s,int i,int x)
    {
        if(root==NULL)
        return ;
        
        if((root->left==NULL && root->right==NULL) && i==k)
        s.insert(x);
        
        pkd(root->left,k,s,i+1,x);
        pkd(root->right,k,s,i+1,x);
     }
    
    int printKDistantfromLeaf(Node* root, int k)
    {
        //Add your code here.
        set<int> s;
    if (root == nullptr)
        return s.size();

    pkd(root, k, s, 0, root->data);

    
    int leftResult = printKDistantfromLeaf(root->left, k);
    int rightResult = printKDistantfromLeaf(root->right, k);

    return s.size() + leftResult + rightResult;
    }
