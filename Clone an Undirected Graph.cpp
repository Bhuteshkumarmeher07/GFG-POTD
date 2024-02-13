Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> vis;
        vis[node]=new Node(node->val);
        queue<Node*> q;
        q.push(node);
        
        Node * tempNode;
        vector<Node*> adj;
        
        while(!q.empty()){
            tempNode = q.front();
            q.pop();
            adj = tempNode->neighbors;
            
            for(auto it : adj){
                if(!vis[it]){
                    vis[it] = new Node(it->val);
                    q.push(it);
                }
                vis[tempNode]->neighbors.push_back(vis[it]);
            }
        }
        return vis[node];
    }
