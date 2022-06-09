class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
       int low = 0,high = n-1;
 
       if(n==1)
       return arr[0];
       if(arr[0]!=arr[1])
       return arr[0];
       if(arr[n-1]!=arr[n-2])
       return arr[n-1];
       // These are the corner cases that if we found single element at corner the we simply return that element
       
       while(low<=high)
       {
           int mid = (low + high)/2;
           if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1])// if mid element is single then we will simple return that element
           
           {
               return arr[mid];
           }
           else if(arr[mid]==arr[mid-1])//if mid and mid-1 same the we count left array and if it even the our required answer is in right array 
           //so low ko mid +1 else high mid-2
           {
               int lc = mid-low +1;
               if(lc%2==0)
               {
                   low = mid+1;
               }
               else{
                   high = mid-2;
               }
           }
           else if(arr[mid]==arr[mid+1])
           {
               int rc = high-mid+1;
               if(rc%2==0)
               {
                   high = mid-1;
               }
               else{
                   low = mid+2;
               }
           }
       }
       return -1;
       
    }
};