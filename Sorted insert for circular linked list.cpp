Node *sortedInsert(Node* head, int data)
    {
       //Your code here
        Node *node=new Node(data),*temp=head;
        node->next=node;
        if(!temp)return node;
        while(temp->next!=head&&(head->data>data||temp->next->data<=data))temp=temp->next;
        node->next=temp->next;
        temp->next=node;
        if(data<head->data)head=node;
        return head;
    }
