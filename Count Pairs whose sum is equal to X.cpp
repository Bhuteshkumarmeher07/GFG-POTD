int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        int count = 0;
        unordered_set<int> st;
        Node* curr = head1;
        while(curr){
            st.insert(curr->data);
            curr = curr->next;
        }
        curr = head2;
        while(curr){
            if(st.find(x-curr->data)!=st.end()){
                count++;
            }
            curr = curr->next;
        }
        return count;
    }
