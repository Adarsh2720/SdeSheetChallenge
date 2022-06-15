 
 // Tc-> O(N) and SC->O(N)
 bool hasCycle(ListNode *head) {

	unordered_set<ListNode*>s;
	ListNode *curr=head;

	while(curr!=NULL)
	{ 
	    // if the address is present inside the set retur true
	    if(s.find(curr)!=s.end())
		    return true;
		    
	    s.insert(curr);//Storing the address into the set
	    
	    curr=curr->next;
	}

	return false;
}
 //Tc-> O(N) and SC-> O(1)
 bool hasCycle(ListNode *head) {

	// if head is NULL then return false;
	if(head == NULL)
	    return false;

		// making two pointers fast and slow and assignning them to head
	ListNode *fast = head;
	ListNode *slow = head;

		// till fast and fast-> next not reaches NULL
		// we will increment fast by 2 step and slow by 1 step
	while(fast != NULL && fast ->next != NULL)
	{
	    fast = fast->next->next;
	    slow = slow->next;
	   
	    if(fast == slow)
		return true;
	}

		// if traversal reaches to NULL this means no cycle.
	return false;
}
    
    
    
    

