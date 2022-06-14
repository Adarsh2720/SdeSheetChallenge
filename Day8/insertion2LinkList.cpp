

// TC-> O(n * m) and Sc->O(1)
// n= number of nodes present in head1
// m= number of nodes present in head2

ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {

	while(head1!=NULL) {
	    ListNode *temp=head2;
	    
	    while(temp!=NULL) {
		if(temp == head1)
		    return head1;
		temp=temp->next;
	    }
	    head1=head1->next;
	}
	return NULL;
}




// TC-> O(n + m) and Sc->O(1)
// n= number of nodes present in head1
// m= number of nodes present in head2

Node *findIntersection(Node *head1, Node *head2)
{
    //Write your code here
    if(head1==NULL || head2==NULL)
        return NULL;

    
    Node *a=head1;
    Node *b=head2;
    
    while(a!=b){
        a=((a==NULL)?head2:a->next);
        b=((b==NULL)?head1:b->next);
    }
    
    return ((a==NULL)?NULL:a->data)
}
