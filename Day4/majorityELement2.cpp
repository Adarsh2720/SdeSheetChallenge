
#include <bits/stdc++.h>
vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    int count1=0,candidate1=0;
    int count2=0,candidate2=0;
    for(int i=0;i<n;i++)  {

        if(count1==0)
           candidate1=arr[i];
        else if(count2==0)
           candidate2=arr[i];


        if(arr[i]==candidate1)
            count1++;

        else if(arr[i]==candidate2)
            count2++;
        else
        {
            count1--;
            count2--;
        }

    }
    count1=0;count2=0;
    for(auto it:arr)
    {
        if(it==candidate1)
            count1++;
         else if(it==candidate2)
            count2++;
    }

    vector<int>v;

    if(count1>(n/3))
        v.push_back(candidate1);
    if(count2>(n/3))
        v.push_back(candidate2);


    return v;

}
