class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
        int n = pattern.length();
        int m = text.length();
        vector<int> indices;
        for (int i = 0; i <= m - n; ++i) 
        {
            if (text.substr(i, n) == pattern) 
                indices.push_back(i + 1);
        }
        
        return indices;
    }
};
