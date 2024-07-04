string help(Node *root, vector<Node*> &ans, unordered_map<string,int>&mp){
        if(!root) return "#";
        string temp = to_string(root->data) + ' ' + help(root->left, ans, mp) + ' ' + help(root->right, ans, mp);
        if(mp[temp] == 1){
            ans.push_back(root);
        }
        mp[temp]++;
        return temp;
    }
    vector<Node*> printAllDups(Node* root) {
        // Code here
        vector<Node*> ans;
        unordered_map<string,int> mp;
        help(root, ans, mp);
        return ans;
    }
