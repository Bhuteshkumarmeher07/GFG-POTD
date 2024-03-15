Node * merge(Node * head1, Node * head2) {
        Node * p = head1;
        Node * q = head2;
        if (!p) return q;
        if (!q) return p;

        if (p->data > q->data) swap(p, q);

        Node * result = p;
        while (p && q) {
            Node * prev;
            while (p and q and p->data <= q->data) {
                prev = p;
                p = p->next;
            }
            prev->next = q;
            swap(p, q);
        }
        return result;

    }

    void sort(Node **head)
    {
        if (!(*head)->next) return;
        Node * first = (*head);
        Node * second = (*head)->next;
        Node * temp = (*head)->next->next;

        if (temp) {
            Node * tfirst = first;
            second->next = NULL;
            while (temp) {
                tfirst->next = temp;
                tfirst = temp;
                temp = temp->next;
                tfirst->next = NULL;
                if (temp) {
                    Node * temp_next = temp->next;
                    temp->next = second;
                    second = temp;
                    temp = temp_next;
                }
            }
            *head = merge(first, second);
        }
    }
