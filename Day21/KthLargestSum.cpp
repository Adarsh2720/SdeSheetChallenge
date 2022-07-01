#include<bits/stdc++.h>


// Using Max Heap
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	
    vector<int>v;
    priority_queue<int>pq;
   
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=a[i]+b[j];
            pq.push(sum);
        }
    }
    
    for(int i=1;i<=k;i++)
    {
       v.push_back(pq.top());
        pq.pop();
    }
       

    return v;

    
}





// Using Min Heap
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	
    vector<int>v;
    priority_queue<int,vector<int>,greater<int>>pq;
   
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=a[i]+b[j];
            pq.push(sum);
            if(pq.size()>k)
                pq.pop();
        }
    }
    
    while(!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
       
    
    reverse(v.begin(),v.end());
    return v;

    
}