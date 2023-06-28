    int maxDepth(Node *root) {
        // Your code here
        if(root == NULL) return 0;
        stack<pair<Node*, int>> st;
        st.push({root,1});
        int maxDepth = 0;
        
        while(!st.empty())
        {
            Node* curr = st.top().first;
            int currlevel = st.top().second;
            st.pop();
            maxDepth = max(maxDepth, currlevel);
            
            if(curr->left)
            {
                st.push({curr->left, currlevel+1});
            }
            if(curr->right)
            {
                st.push({curr->right, currlevel+1});
            }
        }
        return maxDepth;
    }
