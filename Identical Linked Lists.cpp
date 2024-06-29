bool areIdentical(struct Node *head1, struct Node *head2) {
    // Code here.
    int cnt1=0;int cnt2=0;
    if(head1 == NULL && head2 == NULL) return true;
    while(head1 != NULL && head2 != NULL){
        if(head1->data != head2->data){
            return false;
        }
        if(head1->next !=NULL) cnt1++;
        if(head2->next != NULL) cnt2++;
        head1 = head1->next;
        head2 = head2->next;
    }
    if(cnt1 == cnt2) return true;
    else return false;
}
