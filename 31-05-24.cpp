class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        return ((n & 0b00001111) << 4) | (n >> 4);
    }
};
