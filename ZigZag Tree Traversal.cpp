vector<int> zigZagTraversal(Node* root) {
        vector<int> res;
        if(!root)
            return res;
            
        stack<Node *> s1, s2;
        s1.push(root);
        
        while(!s1.empty() or !s2.empty()) {
            while(!s1.empty()) {
                auto p = s1.top();
                s1.pop();
                
                res.push_back(p->data);
                
                if(p->left)
                    s2.push(p->left);
                
                if(p->right)
                    s2.push(p->right);
            }
            
            while(!s2.empty()) {
                auto p = s2.top();
                s2.pop();
                
                res.push_back(p->data);
                
                if(p->right)
                    s1.push(p->right);
                
                if(p->left)
                    s1.push(p->left);
            }
        }
        
        return res;
    }
