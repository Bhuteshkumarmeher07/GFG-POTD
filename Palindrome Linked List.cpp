 bool isPalindrome(Node *head) {
        // Your code here
        Node *curr=head;
        vector<int>v;
        while(curr){
            v.push_back(curr->data);
            curr=curr->next;
        }
        int i=0,j=v.size()-1;
        while(i<=j){
            if(v[i]!=v[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
