Node* removeAllDuplicates(struct Node* head) {
        Node *newHead = new Node(-1); 
        Node *currHead = newHead;  
        Node *curr = head; 
        while(curr) {
            int cnt = 1; 
            while(curr->next && curr->data == curr->next->data) {
                cnt++;              
                curr = curr->next; 
            }
            
            if(cnt == 1) {
                currHead->next = curr; 
                currHead = currHead->next; 
            }
            curr = curr->next; 
        }
        currHead->next = NULL; 
        return newHead->next;
    }

