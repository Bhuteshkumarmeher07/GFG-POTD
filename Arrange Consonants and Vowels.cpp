struct Node* arrangeCV(Node* head) {
        Node *prev = NULL;
        Node *lastv = NULL;
        Node *cur = head;
        
        while(cur){
            char ch = cur->data;
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                if(lastv != prev){
                    if(lastv == NULL){
                        prev->next = cur->next;
                        cur->next = head;
                        head = cur;
                        lastv = cur;
                        cur = prev->next;
                    }
                    else{
                        prev->next = cur->next;
                        cur->next = lastv->next;
                        lastv->next = cur; 
                        lastv = cur;
                        cur = prev->next;
                    }
                }
                else{
                    lastv = cur;
                    prev = cur;
                    cur = cur->next;
                }
            }
            else{
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
