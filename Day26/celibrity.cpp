


class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    
    bool checkRow(vector<vector<int> >& mat ,int n,int candidate)
    {
        int zeroCount=0;
        
        for(int i=0;i<n;i++)
        {
            if(mat[candidate][i]==0)
                zeroCount++;
        }
       return((zeroCount==n)?true:false);
    }
    
    
    
    bool checkCol(vector<vector<int> >& mat ,int n,int candidate)
    {
        int oneCount=0;
        
        for(int i=0;i<n;i++)
        {
            if(mat[i][candidate]==1)
                oneCount++;
        }
        
        return ((oneCount==n-1) ? true:false);
        
    }
    
    
    
    int celebrity(vector<vector<int> >& mat, int n) 
    {
        stack<int>s;
        
        for(int i=0;i<n;i++)
            s.push(i);
        
        while(s.size() > 1)
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            
            if(mat[a][b]==1)
                s.push(b);
            else
                s.push(a);
        }
        
        int candidate=s.top();
        
        
        bool row=checkRow(mat,n,candidate);
        bool col=checkCol(mat,n,candidate);
        
        if(row == true && col== true)
            return candidate;
        
        
        return -1;
        
    }
};
