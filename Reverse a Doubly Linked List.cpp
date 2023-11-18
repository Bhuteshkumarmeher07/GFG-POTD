    Node* reverseDLL(Node * head)
    {
        Node*n1=head;
        Node*n2=head;
        int count=0;
        while(n1->next!=NULL)
        {
            n1=n1->next;
            count++;
        }
        
        if(count%2!=0)
        {
            count=count+1;
        }
        count=count/2;
        
        while(count>0)
        {
            swap(n1->data,n2->data);
            n1=n1->prev;
            n2=n2->next;
            count--;
        }
        return head;
    }
