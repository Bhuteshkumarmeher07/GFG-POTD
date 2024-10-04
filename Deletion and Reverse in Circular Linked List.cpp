Node* deleteNode(Node* head, int key) {
        
        //if only one node then we return NULL because that one node will be delete
        if(!head->next)
        return NULL;
        
        
        //i will start from second node so previous becomde first node 
        //i stored it in prev variable
        Node* prev = head;
        
        //ans this is our current node
        Node* curr = head->next;
        Node* ansNode = NULL;
        
        
        //special case handling
        //if first node data is equal to key
        //because we dont have any previous node so we need to traverse whole list and 
        //firstly we get previous of forst node
        
        if(head->data==key)
        {
            ansNode = head->next;
            while(curr!=head)
            {
                prev=curr;
                curr=curr->next;
            }
            
            prev->next=curr->next;
            
            return ansNode;
            
        }
        else
        ansNode = head;
        
        
        //now for normal case this code 
        
        Node* flag = curr;
        
        do
        {
            if(curr->data==key)
            {
                prev->next = curr->next;
                return ansNode;
            }
            prev = curr;
            curr = curr->next;
            
        }
        while(curr!=flag);
        
        return ansNode;
    }
