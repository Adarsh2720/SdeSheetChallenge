
// Tc-> O(2*n) and Sc=O(1)
class Solution {
public:
    
    int countNode(Node* &head)
    {
        int count=0;
        Node* curr=head;
        
        while(curr!=NULL) {
            count++;
            curr=curr->next;
        }
        return count;
    }
    
    Node* middleNode(Node* head) {
        
       int pos=countNode(head)/2;
        pos++;
        
        Node *temp=head;
        
        for(int i=1;i<pos;i++)
        {
            temp=temp->next;
        }
        head=temp;
        
        return head;
    }
};


// Tc-> O(n) and Sc=O(1)
class Solution {
public:

    Node* middleNode(Node* head) {
        
       Node *slow=head;
       Node *fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;
    }
};






