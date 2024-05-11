void solve(long long n,vector<long long> &a){
        if(n==1){
           // a.push_back(n);
            return;
        }
        
        if(n%2==0){
            n=sqrt(n);
        }
        else //if(n%2!=0)
        {
            n=(sqrt(n))*n;
        }
        a.push_back(n);
        
        solve(n,a);
        return;
    }
  
    vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long> ans;
        ans.push_back(n);
        
        //solve(n,ans);// --->using Recursions...
        

       //iterative Approach....
        while(n!=1){
            if(n%2==0){
                n=sqrt(n);
            }
            else
            {
                n=n*sqrt(n);
            }
            
            ans.push_back(n);
        }
        
        return ans;
    }
