    int getCount(struct Node* head) {
        // Code here
        // BC
        // if(!head) return head;
        int cnt = 0;
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
            cnt++;
        }
        return cnt+1;
    }
