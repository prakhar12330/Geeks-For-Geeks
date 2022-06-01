class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N == 0 || (N & (N - 1)) != 0) return -1;
        return (int)log2(N) + 1;
    }
};
