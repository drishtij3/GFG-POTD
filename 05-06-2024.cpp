class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        int s1=0;
        int s2=0;
        for(int i=0;i<n;i++){
            s1+=a[i];
        }
        for(int j=0;j<m;j++){
            s2+=b[j];
        }
        int diff=s1-s2;
        
        if(diff%2!=0){
            return -1;
        }
        int key=diff/2;
        unordered_set<int>A_set(a,a+n);
        
        for(int i=0;i<m;i++){
            if(A_set.count(b[i]+key))
            {
                return 1;
            }
        }
        return -1;
        
    }
};
