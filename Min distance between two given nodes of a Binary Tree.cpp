int findPath(Node *root,int a,deque<int> &st){
        if(root==NULL)
        return false;
        st.push_back(root->data);
        if(root->data==a)
        return true;
        if(findPath(root->left,a,st))
        return true;
        if(findPath(root->right,a,st))
        return true;
        st.pop_back();
        return false;
    }
    int findDist(Node* root, int a, int b) {
        if(a==b) return 0;
        deque<int> path1;
        deque<int> path2;
        findPath(root,a,path1);
        findPath(root,b,path2);
        while(path1.front()==path2.front()){
            path1.pop_front();
            path2.pop_front();
        }
      
        return path1.size()+path2.size();
    }
