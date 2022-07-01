void heapify(vector<int> & arr,int index,int size) {


    int left=(2*index)+1,right=(2*index)+2;
    int temp=index;

    
    if(left < size && arr[temp] < arr[left] )
        temp=left;
    if(right < size && arr[temp] < arr[right])
        temp=right;

    if(temp != index)
    {
        swap(arr[index],arr[temp]);
        heapify(arr,temp,size);
    }

    return;
}
    
    
    
    
    
vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
    
    vector<int>merge;
    
    // Step 1. To merge both the heap to a single array
    for(auto it:a)
        merge.push_back(it);
        
    for(auto it:b)
        merge.push_back(it);
    
    // Step 2 . Call heapify function
    for(int i=(merge.size()/2)-1;i>=0;i--)
            heapify(merge,i,merge.size());
    
    return merge;

}