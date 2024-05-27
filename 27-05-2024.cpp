class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        // code here
        map<int, int> dp;
        int ans = 1;

        for (size_t i = 0; i < n; i++)
        {
            dp[a[i]] = max(dp[a[i]], 1);
            
            if (dp.count(a[i] - 1))
                dp[a[i]] = max(dp[a[i]], dp[a[i] - 1] + 1);

            if (dp.count(a[i] + 1))
                dp[a[i]] = max(dp[a[i]], dp[a[i] + 1] + 1);

            ans = max(ans, dp[a[i]]);
        }

        return ans;
    }
};
