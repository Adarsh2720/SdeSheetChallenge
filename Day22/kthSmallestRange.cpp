#include<bits/stdc++.h>

class Node{
    public:
        int data,i,j;
        Node(int data,int i,int j)
        {
            this->data=data;
            this->i=i;
            this->j=j;
        }
};

class comp{
    public:
        bool operator()(Node *a,Node *b)
        {
            return a->data > b->data;
        }
};


int kSorted(vector<vector<int>> &a, int k, int n) {
    
    int _min=INT_MAX,_max=INT_MIN;
    priority_queue<Node*,vector<Node*>,comp>pq;
    
    
    for(int i=0;i<k;i++)
    {
        _max=max(_max,a[i][0]);
        _min=min(_min,a[i][0]);
        pq.push(new Node(a[i][0],i,0));
    }
    
    int start=_min,end=_max;
    
    while(!pq.empty())
    {
        Node *temp=pq.top();
        pq.pop();
        
        _min=temp->data;
        
        if((_max - _min) < (end - start))
        {
            start=_min;end=_max;
        }
        
        if(temp->j+1 < n)
        {
            _max=max(_max,a[temp->i][temp->j+1]);
            pq.push(new Node(a[temp->i][temp->j+1],temp->i,temp->j+1));
        }
        else
            break;
        
        
    }
     
    return (end-start+1);
   
}