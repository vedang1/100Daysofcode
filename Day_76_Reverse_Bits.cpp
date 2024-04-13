class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        long reversed = 0;
        long bitLength = 32; 
        for (int i = 0; i < bitLength; i++) {
            reversed <<= 1; 
            if ((x & 1) == 1) {
                reversed |= 1; 
            }
            x >>= 1; 
        }
        return reversed;
    }
};
