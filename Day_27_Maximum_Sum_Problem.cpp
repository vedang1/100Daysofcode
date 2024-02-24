class Solution
{
    public:
         int solve(int n)
        {
            int sum = (n/2)+(n/3)+(n/4);
            if(sum>n)
            {
          
            int a = solve(n/2);
            int b = solve(n/3);
            int c = solve(n/4);
            
            int sum2 = a+b+c;
            
            return max(sum,sum2);
            
            }
            else{
                return n;
            }
        }
    
        int maxSum(int n)
        {
             return solve(n);
             
        }
};
