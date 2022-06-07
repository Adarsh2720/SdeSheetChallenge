
#include <bits/stdc++.h>
bool comp(vector<int>&a,vector<int>&b)  {
    if(a[0]>b[0])
        return false;
    return true;
}


// Tc-> o(nlogn)+O(n)  Sc-> O(n)
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int n=intervals.size();
   sort(intervals.begin(),intervals.end(),comp);
     vector<vector<int>>v;
       v.push_back(intervals[0]);
    int j=0;
    for(int i=1;i<n;i++) {
        if(v[j][1]>=intervals[i][0])  {
            if(v[j][1]<intervals[i][1])
                v[j][1]=intervals[i][1];
        }
        else  {
            v.push_back(intervals[i]);
            j++;
        }
    }

    return v;

}



// Tc-> o(nlogn)+O(n)  Sc-> O(1)  but it will give a TLE at some test cases
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int n=intervals.size();
   sort(intervals.begin(),intervals.end(),comp);

    for(int i=0;i<n-1;i++) {
        if(intervals[i][1]>=intervals[i+1][0])  {
            if(intervals[i][1]<intervals[i+1][1])
                intervals[i][1]=intervals[i+1][1];

            int j=i+1;
            intervals.erase(intervals.begin()+j);
            n--;i--;
        }
    }

    return intervals;
}
