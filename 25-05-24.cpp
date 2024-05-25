class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        long long sum = 0 , ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] <= k)
            {
                sum += arr[i];
                ans = max(ans, sum);
            }
            else
            {
                ans = max(ans, sum);
                sum = 0;
            }
        }
        return ans;
        
    }
};
