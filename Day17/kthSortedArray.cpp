


//Tc-> O(K) and Sc-> O(1)

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    
    int i=0,j=0,count=0,ans;
    
    while( i<m && j<n)  {
        if(count==k)
            break;
        if(row1[i]<=row2[j])
            ans=row1[i++];
        else
            ans=row2[j++];
        count++;
    }
    
    if(count<k)
    {
        while( i<m && count<k)  {
            ans=row1[i++];
            count++;
        }
        
        while( j<n && count<k)  {
            ans=row2[j++];
            count++;
        }
        
    }
    return ans;   
}


//Tc-> O(min(log(n),log(m))) and Sc-> O(1)
#include <bits/stdc++.h>
int ninjaAndLadoos(vector<int> &arr1, vector<int> &arr2, int n, int m, int k) {
    // Write your code here.
    if(m<n)
        return ninjaAndLadoos(arr2,arr1,m,n,k);
        
    int low=max(0,k-m);
    int high=min(k,n);

    while(low<=high){
        int p1=(low+high)/2;
        int p2=k-p1;

        int l1=p1==0 ? INT_MIN : arr1[p1-1];
        int l2=p2==0 ? INT_MIN : arr2[p2-1];
        int r1=p1==n ? INT_MAX : arr1[p1];
        int r2=p2==m ? INT_MAX : arr2[p2];

        if(l1<=r2 && l2<=r1)
            return max(l1,l2);
        else if(l1>r2)
            high=p1-1;
        else
            low=p1+1;
    }

        return 1;
}

