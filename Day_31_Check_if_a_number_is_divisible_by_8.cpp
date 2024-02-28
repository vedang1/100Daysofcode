class Solution{
    public:
    // A Number is divisible by 8 only if the last 3 digits, 
    // starting from unit place are divisible by 8.
    int DivisibleByEight(string s){
        //code here
        int n = s.size();
        // Extract last 3 digits, if they exists, from the string
        string t = s.substr(n - min(3, n), min(3, n));
        // Convert to Integer
        int i = stoi(t);
        // Check Divisibility
        return i%8 == 0 ? 1 : -1;
    }
};
