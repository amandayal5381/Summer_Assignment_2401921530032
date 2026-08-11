class Solution {
public:
    int search(vector<int>& arr, int key) {

    int n=arr.size();
    int start=0,mid,end=n-1;

    while(start<=end)
    {
    
    //find mid
    mid=(start+end)/2;
    //find key size
    if(arr[mid]==key)
    return mid;

    else if(arr[mid]<key)
    start =mid+1;

    else 
    end=mid-1;
    
    }
    return -1; 
    }
};