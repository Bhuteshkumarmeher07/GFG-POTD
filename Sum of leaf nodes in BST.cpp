int sum=0;
        void solve(Node *root)
        {
            if(root==NULL)return;
            if(root->left==NULL && root->right==NULL)
            {
                sum+=root->data;
                return;
            }
            solve(root->left);
            solve(root->right);
        }
        int sumOfLeafNodes(Node *root ){
             /*Your code here */
             solve(root);
             return sum;
        }
