#include<bits/stdc++.h>
using namespace std;
class heap {
    public:
        vector<int>arr;

        heap()
        {
            arr.push_back(0);
        }

        void insert_node(int val)
        {
            arr.push_back(val);
            int index=arr.size()-1;

            while(index > 1)
            {
                int parent=index>>1;

                if(arr[parent]<arr[index])
                {
                     swap(arr[parent],arr[index]);
                      index=parent;
                }
                else
                {
                    return;
                }

            }

        }


        void print()
        {
            for(int i=1;i<arr.size();i++)
                cout<<arr[i]<<" ";
        }

        void delete_node()
        {
            arr[1]=arr[arr.size()-1];
            arr.pop_back();

            int index=1;

            while(index < arr.size()-1)
            {

                int leftChild=2*index;
                int rightChild=(2*index)+1;

                if(leftChild == arr.size())
                    return;

                if(rightChild == arr.size())
                {
                    if(arr[index] <arr[leftChild])
                        swap(arr[index],arr[leftChild]);

                    return;
                }


                cout<<"left child= "<<arr[leftChild]<<"Right child= "<<arr[rightChild]<<"\n";

                if(arr[leftChild]> arr[rightChild] && arr[index] <arr[leftChild] )
                {
                    swap(arr[index],arr[leftChild]);
                    index=leftChild;
                }
                else if(arr[rightChild]> arr[leftChild]  && arr[index] <arr[rightChild] )
                {
                    swap(arr[index],arr[rightChild]);
                    index=rightChild;
                }
                else
                    return;
            }

        }

};






void heapify(vector<int> & arr,int index,int size)
{
    int left=2*index,right=(2*index)+1; // for 1 way indexing
    int left=2*index+1,right=(2*index)+2; // for 2 way indexing
    int temp=index;

    //for 1 based indexing
    if(left <= size && arr[temp] < arr[left] )
        temp=left;
   if(right <= size && arr[temp] < arr[right])
        temp=right;

    // for 0 based indexing
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



void heapSort(vector<int> &arr)
{
    int size=arr.size()-1;
    while(size>0)
    {
        swap(arr[1],arr[size]);
        size--;
        heapify(arr,1,size);
    }
}


main()
{
    vector<int> arr={-1,54,53,55,52,50,56};

    // for 1 way indexing
    for(int i=(arr.size()/2);i>0;i--)
        heapify(arr,i,arr.size());

    // for 0 based indexing  
    for(int i=(arr.size()/2)-1;i>0;i--)
        heapify(arr,i,arr.size());


    for(int i=1;i<arr.size();i++)
        cout<<arr[i]<<" ";


    cout<<"\n HeapSort \n \n";

    heapSort(arr);



    for(int i=1;i<arr.size();i++)
        cout<<arr[i]<<" ";

}





