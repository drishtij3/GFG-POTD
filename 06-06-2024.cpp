class Solution {
  public:
    long long max_sum(int a[], int n) {
        long int cur_sum = 0;
        for(int i = 0; i < n; i++){
            cur_sum += (long int)a[i];
        }
        long int cur_value = 0;
        for(int i = 0; i < n; i++){
            cur_value += (long int) a[i] * i;
        } 
        long int next_value = 0;
        long int ans =  INT_MIN;
        
        for(int i = 0 ; i < n; i++ ){
            //based on this formula we can find on o(n)
            next_value = cur_value - cur_sum + (long int)a[i]*n;
            cur_value = next_value;
            ans = max(ans, cur_value);
        }
        return ans;
    }
};
