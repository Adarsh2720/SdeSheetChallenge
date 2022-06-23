


class Solution {
public:
    
    void solve( vector<int>&temp,int target, vector<int>&v,int i,vector<vector<int>>&ans)
    {
        if(target<=0 || i == v.size())
        {
            if(target == 0)
                ans.push_back(temp);
            return;
        }

	//Here we are taking the same element by not changing the index
        temp.push_back(v[i]);
        solve(temp,target-v[i],v,i,ans);
        
         //Here we are taking the same element by not changing the index
        temp.pop_back();
        solve(temp,target,v,i+1,ans);
    }

  
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(temp,target,cand,0,ans);
        return ans;
    }
};
