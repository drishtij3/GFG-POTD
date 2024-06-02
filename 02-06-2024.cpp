class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int> v;
        v.push_back(0);
        int totalXor=0;
        for(int i=0;i<q;i++){
            int a=queries[i][0];
            int b=queries[i][1];
            if(a==0){
                v.push_back(b^totalXor);
            }else if(a==1){
                totalXor=totalXor^b;
            }
        }
        // here  when a==0 then we push back the b but with the xoring with the totalXor...
        // so when we last do the xor with the all elements then it cancle out the effect of this xoring which we do here when a==0 come
        // for example {{0, 2}, {1, 3}, {0, 5}} when 2nd 0 comes w push the 5 with the xor with the totalXor and in last when we
        // do the xor of all elements with totalXor=3 then this 3^3^5=5 remaining means previously xor's effect is cancle out..
        // like wise do for the other test cases...
        for(int i=0;i<v.size();i++){
            v[i]=v[i]^totalXor;
        }
        sort(v.begin(),v.end());
        return v;
    }
};
