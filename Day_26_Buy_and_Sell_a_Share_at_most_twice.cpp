class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
            int a=INT_MAX, b=0, c=INT_MAX, d=0;
            for(auto &x:price){
                a=min(a,x);
                b=max(b,x-a);
                c=min(c,x-b);
                d=max(d,x-c);
            }
            return d;
        }
};
