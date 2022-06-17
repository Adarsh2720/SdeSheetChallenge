#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
         int data;
         Node* next;

         Node(int data)
         {
            this->data=data;
            this->next=NULL;
         }
};

void insertAtHead(Node *&head,int data)
{

    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}


void insertAtMiddle(Node* &head,int pos,int data)
{
    if(pos == 1)
        insertAtHead(head,data);
    else
    {
        Node *midNode = new Node(data);
        Node *temp=head;

        for(int i=1;i<pos-1;i++)
            temp=temp->next;

        midNode->next=temp->next;
        temp->next=midNode;
    }

}


void insertAtEnd(Node* &head,int data)
{

    Node *endNode = new Node(data);
    Node *temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=endNode;

}


void print(Node* &head)
{
    Node * temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


//Delete Node by postion

void deleteNode(Node* &head,int pos)
{
    Node *delNode;
    if(pos==1)
    {
        delNode=head;
        head=head->next;
    }
    else
    {
        Node *curr=head;

        for(int i=1;i<=pos-2;i++)
            curr=curr->next;

        delNode=curr->next;
        curr->next=curr->next->next;
    }
    delete delNode;
}


main()
{

    Node *head=NULL;
    Node* node1=new Node(12);
    head=node1;

    print(head);
    cout<<"\n";


    //Insert At front
    insertAtHead(head,10);
    insertAtHead(head,9);
    print(head);
    cout<<"\n";

    //Insert at end
    insertAtEnd(head,13);
    insertAtEnd(head,14);
    print(head);
    cout<<"\n";

    //Insert at middle
    insertAtMiddle(head,3,100);
    insertAtMiddle(head,7,200);
    print(head);

    deleteNode(head,7);
    cout<<"\n";
    print(head);


}
