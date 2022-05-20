class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    int ans = INT_MAX;
    
    sort(a.begin(),a.end());
    for(long long int i = 0; i<=n-m; i++)
    {
        int mindx = a[i];
       long long int maxdx = a[i+m-1];
        int gap = maxdx-mindx;
        if(gap<ans)
        {
            ans = gap;
        }
    }
    return ans;
    }   
};