class Solution {
  public:
        // Function to multiply two matrices A and B modulo m
        // Parameters:
        //   - A: First matrix (2D vector of long long integers)
        //   - B: Second matrix (2D vector of long long integers)
        //   - m: Modulus value (long long integer)
        // Returns:
        //   - Resulting matrix after multiplication modulo m (2D vector of long long integers)
        vector<vector<long long>> multiply(const vector<vector<long long>>& A, const vector<vector<long long>>& B, long long m) {
            int size = A.size();
            // Initialize the result matrix with zeros
            vector<vector<long long>> result(size, vector<long long>(size, 0));
        
            // Perform matrix multiplication
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    for (int k = 0; k < size; ++k) {
                        // Multiply corresponding elements and accumulate the result
                        result[i][j] += A[i][k] * B[k][j];
                        // Apply modulo operation to avoid overflow
                        result[i][j] %= m;
                    }
                }
            }
        
            return result;
        }
        
        // Function to calculate the n-th term of the generalized Fibonacci sequence modulo m
        // Parameters:
        //   - a: Coefficient of g(n-1) in the recurrence relation (long long integer)
        //   - b: Coefficient of g(n-2) in the recurrence relation (long long integer)
        //   - c: Constant term in the recurrence relation (long long integer)
        //   - n: Index of the term to calculate (long long integer)
        //   - m: Modulus value (long long integer)
        // Returns:
        //   - n-th term of the generalized Fibonacci sequence modulo m (long long integer)
        long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
            // Base case: g(1) = g(2) = 1 mod m
            if (n <= 2)
                return 1 % m;
        
            // Initialize matrices for matrix exponentiation
            vector<vector<long long>> mat = {{a, b, 1}, {1, 0, 0}, {0, 0, 1}};
            vector<vector<long long>> res = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
        
            // Perform matrix exponentiation to calculate g(n) modulo m
            n -= 2; // g(n) for n > 2 is equivalent to g(n-2)
            while (n > 0) {
                if (n & 1) {
                    // If n is odd, multiply the result matrix by mat
                    res = multiply(res, mat, m);
                }
                // Square the matrix mat for the next iteration
                mat = multiply(mat, mat, m);
                n >>= 1; // Right shift n to divide by 2
            }
        
            // Calculate the final result g(n) modulo m
            return (res[0][0] + res[0][1] + c * res[0][2]) % m;
        }
};
