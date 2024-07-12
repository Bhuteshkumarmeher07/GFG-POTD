bool checker(Node* root, int target){
      if(!root)return false;
      if(!root->left && !root->right){
          target -= root->data;
          if(target == 0)return true;
          if(target < 0)return false;
      }
      target -= root->data;
      bool a = checker(root->left,target);
      bool b = checker(root->right,target);
      
      target += root->data;
      return a | b;
      
  }
    bool hasPathSum(Node *root, int target) {
        // Your code here
        return checker(root,target);
    }
