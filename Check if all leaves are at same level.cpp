bool check(Node *root)
    {
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            int s=0;
            while(size--){
                auto q1=q.front();
                q.pop();
                if(!q1->left and !q1->right) s=1;
                if(q1->left) q.push(q1->left);
                if(q1->right) q.push(q1->right);
            }
            if(s==1 and q.size()) return false; 
        }
        return true;
    }
