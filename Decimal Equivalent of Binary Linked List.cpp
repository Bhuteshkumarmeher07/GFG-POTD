Node*reverse(Node*head){
            Node*p=head,*q=NULL,*r=NULL;
            while(p){
                r=q;
                q=p;
                p=p->next;
                q->next=r;
            }
            return q;
        }
        long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
           long long unsigned int num=0;
           long mod=1e9+7;
           Node*curr=head;
           curr=reverse(curr);
           long long unsigned  int j=1;
           while(curr){
               num= (num + curr->data*j)%mod;
               curr=curr->next;
               j=(j*2)%mod;
           }
           return num;
        }
