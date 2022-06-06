
// Without index
#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{

    long long currAns=0,finalAns=arr[0];
   for(int i=0;i<n;i++)  {
       currAns+=arr[i];
       finalAns=max(currAns,finalAns);
       if(currAns<0)
           currAns=0;
   }

    return ((finalAns>=0)?finalAns:0);
}

//With index
#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{

    long long currAns=0,finalAns=arr[0];
    int start=0,tempStart=0,end;
   for(int i=0;i<n;i++)  {
       currAns+=arr[i];


       if(currAns>finalAns) {
         finalAns=currAns;
         start=tempStart;
         end=i;
       }
       else if(currAns<0) {

            currAns=0;
            tempStart=i+1;

       }
   }

    return ((finalAns>=0)?finalAns:0);
}
