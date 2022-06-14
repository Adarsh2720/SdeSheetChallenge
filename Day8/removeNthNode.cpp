

// TC->O(2N) and Sc->O(1)

class Solution {
public:
    
    int listCount(Node *&head) {
        Node *curr=head;
        int count=0;
        while(curr!=NULL) {
            count++;
            curr=curr->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(Node* head, int n) {
        
        int pos=listCount(head)-n+1;
    
        Node *temp;
        if(pos==1) {
            temp=head;
            head=head->next;
            temp->next=NULL;
        }
        
        else{
            Node *curr=head;
            for(int i=1;i<pos-1;i++)
                curr=curr->next;
            
            temp=curr->next;
            curr->next=temp->next;
            temp->next=NULL;
        }

        delete temp;
        return head;     
    }
};

// Tc-> O(N) using 2 pointers approach and Sc->O(1)


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        Node *fast=head,*slow=head;
        
        for(int i=1;i<=n;i++)
            fast=fast->next;
        
        Node *temp;
        
        if(fast== NULL ) {
            temp=head;
            head=head->next;
            temp->next=NULL;
        }
        
        else {
            while(fast->next!=NULL) {
                slow=slow->next;
                fast=fast->next;
            }

            temp=slow->next;
            slow->next=temp->next;
            temp->next=NULL;
        
        }

        delete (temp);
        return head;
    }
};








