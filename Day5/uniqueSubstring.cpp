#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
        if(s== " ")
            return 1;
        
        unordered_set<char>mp;
        int n=s.size();
        
        int count=0,final_count=0;
        int left=0,right=0;
        
        for(right=0;right<n;right++)
        {
            if(mp.find(s[right]) == mp.end())
            {
                mp.insert(s[right]);
                final_count=max(right-left+1,final_count);
                
            }
            else
            {
                mp.erase(s[left]);
                left++;  right--;
            }
        }
        
        
        return final_count;
}