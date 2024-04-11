class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here
        int num=0;
        while(n)
        {
            num^=n;
            n>>=1;
        }
        return num;
        
    }
};
