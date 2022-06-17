int countNode(Node* head)
{
    Node* curr=head;
    int count=0;

    while(curr != NULL)
    {
        count++;
        curr=curr->next;
    }

    return count;
}

Node* rotateRight(Node* head, int k) {


    if(head == NULL || po)
        return head;
    int pos=k%countNode(head);    
    Node *slow=head,*fast=head;


    for(int i=1;i<=pos;i++)
        fast=fast->next;

    Node *temp;

    if(fast==NULL  || pos == 0 )
        return head;

    else  {
    
        while(fast->next!=NULL) {
            slow=slow->next;
            fast=fast->next;
        }

        temp=slow->next;
        slow->next=NULL;
        fast->next=head;
        head=temp;

    }

    return head;

}

