class Solution {
  public:
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        // code here
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,
            greater<pair<int,pair<int,int>>>> pq;
        int r = heights.size();
        int c= heights[0].size();
        vector<vector<int>>dist(r,vector<int>(c,INT_MAX));
        dist[0][0] = 0;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            auto temp = pq.top();
            pq.pop();
            int diff = temp.first;
            int row = temp.second.first;
            int col = temp.second.second;
            if(row == r-1 and col == c-1) return diff;
            if(row>0){
                int newEffort = max(abs(heights[row][col] - heights[row-1][col] ), diff);
                if(newEffort<dist[row-1][col]){
                    dist[row-1][col] = newEffort;
                    pq.push({newEffort,{row-1,col}});
                }
            }
            if(col>0){
                int newEffort = max(abs(heights[row][col] - heights[row][col-1] ), diff);
                if(newEffort<dist[row][col-1]){
                    dist[row][col-1] = newEffort;
                    pq.push({newEffort,{row,col-1}});
                }
            }
            if(row<r-1){
                int newEffort = max(abs(heights[row][col] - heights[row+1][col] ), diff);
                if(newEffort<dist[row+1][col]){
                    dist[row+1][col] = newEffort;
                    pq.push({newEffort,{row+1,col}});
                }
            }
            if(col<c-1){
                int newEffort = max(abs(heights[row][col] - heights[row][col+1] ), diff);
                if(newEffort<dist[row][col+1]){
                    dist[row][col+1] = newEffort;
                    pq.push({newEffort,{row,col+1}});
                }
            }
        }
        return 0;
    }
};
