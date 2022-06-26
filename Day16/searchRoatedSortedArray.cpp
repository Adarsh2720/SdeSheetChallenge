



int  pivot(int* arr, int n)

{

   int lo = 0, hi = n - 1,mid;

   while (lo < hi)

   {
       mid = lo + (hi - lo) / 2;
       if (arr[mid] >= arr[0])
           lo = mid + 1;
       else
           hi = mid;

   }

  return lo;

}

int binary_search(int arr[],int lo,int hi,int key)

{

    int mid;
   while(lo<=hi)

   {  
        
        mid=lo+(hi-lo)/2;
     if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            lo=mid+1;
        else
            hi=mid-1;

   }

return -1;

}

int search(int* arr, int n, int key) {

   // Write your code here.

   int s=0,e=n-1,ans=0;

   int pivot_res=pivot(arr,n);

   if(arr[pivot_res]<=key && key<=arr[e])

   {

       //second line

 ans= binary_search(arr,pivot_res,e,key);

   }

   else

   {

  //first line 

       ans=binary_search(arr,s,pivot_res-1,key);

   }

   return ans;

}
