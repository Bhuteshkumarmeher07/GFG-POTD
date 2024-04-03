void move(Node* root , int x ,int y , stack<int> &st){
        if(!root)   return;
        
        int curr = root->data;
        st.push(curr);
        
        if(curr<x && curr<y)    move(root->right,x,y,st);
        if(curr>x && curr>y)    move(root->left,x,y,st);
        return;
    }

    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        // your code goes here
        stack<int> st;
        move(root,x,y,st);
        
        while(k>1 && !st.empty()){
            st.pop();
            k--;
        }
        
        return st.empty()? -1 : st.top();
    }
