ListNode* hasCycle(ListNode *head) {

	if(head == NULL)
	    return NULL;

	ListNode *fast = head;
	ListNode *slow = head;
	
	while(fast != NULL && fast ->next != NULL) {
	    fast = fast->next->next;
	    slow = slow->next;
	    if(fast == slow)
		return slow;
	}

	return NULL;
}
ListNode *detectCycle(ListNode *head) {

	ListNode *intersection=hasCycle(head);

	if(intersection==NULL)
	    return NULL;

	ListNode *start=head;

	while(start!=intersection)
	{
	    start=start->next;
	    intersection=intersection->next;
	}

	return start;

}
