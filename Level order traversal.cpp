vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>q;
      q.push(root);
      while(!q.empty())
      {
         int sz = q.size();
         while(sz --)
         {
            Node *node = q.front();
            q.pop();
            ans.push_back(node->data);
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
         }
      }
      return ans;
    }
