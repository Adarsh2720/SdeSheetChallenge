

//Tc-> O(nlogn*n +n)  Sc-> O(1)
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

	if(m==0 || n==0 ) {
	    if(m==0)
		nums1=nums2;
	    return;
	}

	int total=m+n;
	for(int i=0;i<m;i++)  {
	    if(nums1[i]>nums2[0])
		swap(nums1[i],nums2[0]);
	    
	    sort(nums2.begin(),nums2.end());
	}

	int j=0;
	for(int i=m;i<(n+m);i++)  {
	    nums1[i]=nums2[j];
	    j++;
	}


}


// TC-> O(n) ans Sc-> O(1)
vector<int> mergeSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 and j>=0){
        if(nums1[i]<nums2[j])
        {
            nums1[k--]=nums2[j--]; 
            // here nums2[j] is greater , so copy and decresase both
         }
         else
         {
             nums1[k--]=nums1[i--]; 
             // here nums1[i] is greater/equal to , so copy and decresase both
          }
        }
        // if left over numbers.
         while(j>=0) nums1[k--]=nums2[j--];
    
    
  
