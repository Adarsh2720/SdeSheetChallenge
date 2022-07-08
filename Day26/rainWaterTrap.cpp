#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    long ans=0;
    
    vector<long>maxL(n);
    vector<long>maxR(n);
    
    maxL[0]=arr[0];
    maxR[n-1]=arr[n-1];
    
    for(int i=1;i<n;i++)
        maxL[i]=max(maxL[i-1],arr[i]);
    
    for(int i=n-2;i>=0;i--)
         maxR[i]=max(maxR[i+1],arr[i]);
    
    for(int i=0;i<n;i++)
    {
        ans+=min(maxL[i],maxR[i])-arr[i];
    }
    
    return ans;
    
    
}


long getTrappedWater(long *a, int n){
    // Write your code here.
    
    long lmax=0,rmax=0;
    
   int i=0,j=n-1;
    long sum=0;
    
    while(i<j){
        lmax=max(lmax,a[i]);
        rmax=max(rmax,a[j]);
            
        if(lmax<rmax){
            sum+=(lmax-a[i]);
            i++;
        }else{
            sum+=(rmax-a[j]);
            j--;
        }
    }
    return sum;
}