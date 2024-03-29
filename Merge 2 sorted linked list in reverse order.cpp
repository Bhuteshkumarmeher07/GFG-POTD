class Solution
{
    public:
    
    struct Node * reverse(Node* head){
        struct Node* prev = NULL;
        struct Node* curr = head;
        while(curr){
            Node *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        if(node1 == NULL && node2 == NULL) return NULL;
        struct Node* head = new Node();
        struct Node* prev = head;
        struct Node* n1 = reverse(node1);
        struct Node* n2 = reverse(node2);
        if(node1 == NULL) return n2;
        if(node2 == NULL) return n1;
        while(n1 && n2){
            if(n1->data > n2->data){
                prev->next = n1;
                prev = n1;
                n1 = n1->next;
            }
            else {
                prev->next = n2;
                prev = n2;
                n2 = n2->next;
            }
        }
        if(n1 == NULL) prev->next = n2;
        else prev->next = n1;
        return head->next;
    }  
