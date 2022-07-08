


#include<bits/stdc++.h>

class SpecialStack {
   
    stack<pair<int,int>>s;
    int mini;
    
    
    public:
        
    void push(int data) {
        
       if(s.empty())
           mini=data;
        else
            mini=min(data,s.top().second);
        
        s.push({data,mini});
        return;
    }

    int pop() {
        if(s.empty())
            return -1;
        int ans=s.top().first;
        s.pop();
        return ans;
    }

    int top() {
        return (s.top().first);
    }

    bool isEmpty() {
        return  s.empty();
    }

    int getMin() {
        if(s.empty())
            return -1;
        return (s.top().second);
    }  
};





class SpecialStack {
    // Define the data members.
stack<int> s;
    int mini = INT_MAX;
    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
        //for first element
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data<mini){
                //we got new min 
                int val = 2*data - mini;
                s.push(val);
                mini = data;
            }
            else{
                //normal push
                s.push(data);
            }
        }
    }

    int pop() {
        if(s.empty()){
            return -1;
        }
         int curr = s.top();
        s.pop();
        if(curr > mini){
            return curr;
        }
        else{
         int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMin;
        }
    }

    int top() {
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if(s.empty()){
            return -1;
        }
        else{
            return mini;
        }
    }  
};