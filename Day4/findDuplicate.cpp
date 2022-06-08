
//Tc-> O(nlogn)+O(n) Sc-> O(1)
int findDuplicate(vector<int> &arr, int n){

// Write your code here.
   sort( arr.begin() , arr.end() );

   for( int i=0; i<arr.size()-1; i++ ) {

       if( arr[i] == arr[i+1] ) {
           return arr[i];
       }

   }

}


//Tc-> O(n) Sc-> O(n)
int findDuplicate(vector<int> &arr, int n){
	vector<int>mp(n,false);
    
    for(auto it:arr)
    { 
        if(mp[it])
            return it;
        mp[it]=true; 
    }
}
