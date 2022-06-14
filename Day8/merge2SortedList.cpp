// My soln 

class Solution {
public:
    ListNode* mergeTwoLists(Node* &head1, Node* &head2) {
        
        if (head1 == NULL) return head2;
        
        if (head2 == NULL) return head1;
        
        Node* prev1=head1;
        Node *curr2=head2;
        Node *temp=NULL;
    
        while(prev1!=NULL && curr2!=NULL)
        {
            if(curr2->val < prev1->val)             {
                temp=curr2;
                curr2=curr2->next;
                temp->next=head1;
                head1=temp;
                prev1=head1;
            }
            else
                break;

        }
        
        Node *curr1=head1->next;
        
        while(curr1!=NULL && curr2!=NULL) {
            if(curr2->val < curr1->val ) {
                prev1->next=curr2;
                temp=curr2;
                curr2=curr2->next;
                temp->next=curr1;
                prev1=prev1->next;
                continue;
            }
            prev1=curr1;
            curr1=curr1->next;
        }
        
        while(curr2!=NULL) {
            prev1->next=curr2;
            curr2=curr2->next;
            prev1=prev1->next;
        }
        
        return head1;
        
    }
};


// Optimize Soln




class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      
        if(list1 == NULL)  return list2;    // if list1 happen to be NULL  we will simply return list2.

        if(list2 == NULL) return list1;  // if list2 happen to be NULL we will simply return list1.
            
        
        ListNode * ptr = list1;
        if(list1 -> val > list2 -> val) {
            ptr = list2;
            list2 = list2 -> next;
        }
        else {
            list1 = list1 -> next;
        }
        ListNode *curr = ptr;
        
		
        while(list1!=NULL &&  list2!=NULL) {
            if(list1 -> val < list2 -> val){
                curr->next = list1;
                list1 = list1 -> next;
            }
            else{
                curr->next = list2;
                list2 = list2 -> next;
            }
            curr = curr -> next;
                
        }

	//Inserting the remaining elements	
        if(!list1)
            curr -> next = list2;
        else
            curr -> next = list1;
            
        return ptr;
       
    }
};


