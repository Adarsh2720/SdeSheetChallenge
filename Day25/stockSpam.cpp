#include<bits/stdc++.h>
class Node{
    public:
        int data;
        int count;
        Node(int _data,int _count) {
            data=_data;
            count=_count;
        }
};

vector<int> findSpans(vector<int> &price) {
    stack<Node>s;
    int n=price.size();
    vector<int> ans;
    
    for(int i=0;i<n;i++)
    {
        int countNodes=1;
        while(!s.empty() && s.top().data<=price[i])
        {
            countNodes+=s.top().count;
            s.pop();
        }
        ans.push_back(countNodes);
        Node temp(price[i],countNodes);
        s.push(temp);
    }
    return ans;
}