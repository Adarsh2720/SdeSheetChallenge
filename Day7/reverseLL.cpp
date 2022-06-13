
// TC-> O(n) SC->O(1) using 3 pointers approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     
       ListNode *prev=NULL;
       ListNode *curr=head;
        ListNode *temp;
        
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
};

// TC-> O(n) SC->O(1) using Recursive approach + 3 pointers


class Solution {
public:
    
    void reverse(ListNode* &head,ListNode* curr,ListNode* prev)
    {
        if(curr == NULL)
        {
            head=prev;
            return;
        }
        
        ListNode *temp=curr->next;
        reverse(head,temp,curr);
        curr->next=prev;
    }
    
    
    ListNode* reverseList(ListNode* &head) {
     
       ListNode *prev=NULL;
       ListNode *curr=head;
       
        
        reverse(head,curr,prev);
        
        return head;
        
    }
};




class Solution {
public:
    ListNode* reverseList(ListNode* &head) {
     
        //If the node contains only one/zero elements
       if(head==NULL || head->next==NULL)
           return head;
        
        ListNode* newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return newHead;  
           
    }
};
