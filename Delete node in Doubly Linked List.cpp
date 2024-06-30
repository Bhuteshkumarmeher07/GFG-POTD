Node* deleteNode(Node* head, int x) {
        // if position is 1 -- delete first node
        if(x == 1) {
            Node *temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        // if need to delete any intermediate or last node
        // move to that node which needs to be deleted
        Node *tempHead = head;
        for(int pos=1;pos<x;pos++) {
            tempHead = tempHead->next;
        }
        
        // store that node temporarily
        Node *temp = tempHead;
        // arrange prev and next pointers carefully
        tempHead->prev->next = temp->next;
        if(temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
        
        // at last delete node and return head
        delete temp;
        return head;
    }
