bool compute(Node* head) {
        // Your code goes here
        string str;
        Node* temp=head;
        while(temp!=NULL){
            str+=temp->data;
            temp=temp->next;
            
        }
        int start=0;
        int end=str.length()-1;
        for(int i=0;i<str.length();i++){
            if(str[start]!=str[end]){
                return false;
            }    
            start++;
         
           end--;
        }
        return true;
    }
