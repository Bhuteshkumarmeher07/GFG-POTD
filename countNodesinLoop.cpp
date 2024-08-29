int findlength(Node * slow, Node * fast){
        int cnt = 1;
        fast = fast->next;
        while(slow != fast){
            cnt++;
            fast = fast->next;
        }
        return cnt;
    }
    int countNodesinLoop(Node *head) {
        // find loop
        Node *slow = head;
        Node * fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                // loop detected
                return findlength(slow,fast);
            }
        }
        return 0;
        // find length
    }
