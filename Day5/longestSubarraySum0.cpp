
// Tc-> O(n) ans SC->O(n)

#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  unordered_map<int,int>mp;
    int n=arr.size(),final_count=0,sum=0;
   
    for(int i=0;i<n;i++)  {
        sum+=arr[i];
        if(sum==0){
            final_count=i+1;
        }
        else
        {
            if(mp.find(sum) == mp.end()){
                mp[sum]=i;
            }
            else{
                 int diff=i-mp[sum];
                final_count=max(final_count,diff);
            }
        }
    }
    
    return final_count;

}