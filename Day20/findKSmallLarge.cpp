#include<bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	priority_queue<int>min_element;  //implements maxHeap
    priority_queue<int,vector<int>,greater<int>>max_element; //implements minHeap
    
    vector<int>ans; 
    
    for(auto it:arr)
    {
        min_element.push(it);
        max_element.push(it);
        
        if(min_element.size()>k)
            min_element.pop();
        
        if(max_element.size()>k)
            max_element.pop();
    }

    
    ans.push_back(min_element.top());
    ans.push_back(max_element.top());
    return ans; 
}