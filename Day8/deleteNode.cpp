class Solution {
public:
void deleteNode(ListNode* node) {
        ListNode* temp;
        while(node->next!=NULL)
        {
            node->val=node->next->val;
            if(node->next->next==NULL)
            node->next=NULL;
            else
            node=node->next;
        }
        
    }
};
