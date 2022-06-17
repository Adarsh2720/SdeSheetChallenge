
// Tc->O(N) and SC->O(N)
bool isPalindrome(ListNode* head) {

    ListNode* tempList=new ListNode(head->val);
    ListNode*newHead=tempList;

    ListNode *curr=head->next;

    while(curr!=NULL)
    {
        ListNode *temp=new ListNode(curr->val);
        temp->next=newHead;
        newHead=temp;
        curr=curr->next;
    }
    curr=head;
    ListNode *newCurr=newHead;

    while(newCurr!=NULL)
    {
        if(newCurr->val != curr->val)
            return false;

        curr=curr->next;
        newCurr=newCurr->next;
    }

    return true;

}



#include <bits/stdc++.h> 

LinkedListNode<int> * getMid(LinkedListNode<int> * head) {

    LinkedListNode<int> *slow=head;
    LinkedListNode<int> *fast=head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}



LinkedListNode<int>* reverse(LinkedListNode<int>* head)
{
        LinkedListNode<int> *prev=NULL, *curr=head,*temp;
        
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        head=prev;
        
        return head;
}

bool isPalindrome(LinkedListNode<int> *head) {
    
    if(head == NULL)
        return true;
    
    
    LinkedListNode<int>* mid=getMid(head);
    LinkedListNode<int>* temp=mid->next; 
    mid->next=reverse(temp);
    
   
    
    
    LinkedListNode<int>* curr1=head;
    LinkedListNode<int>* curr2=mid->next;

    
      
    
    while(curr2!=NULL){
        if(curr1->data !=curr2->data)
            return false;
        curr1=curr1->next;
        curr2=curr2->next;
    }
        
    
    
    
    return true;
    
    

}
