class Solution{
public:
    vector<int> recamanSequence(int n){
        vector<int>ans;
        set<int>st;
        ans.push_back(0);
        st.insert(0);
        
        
        for(int i=1;i<n;i++){
            int num = ans.back()-i;
            if(num<0 || st.find(num)!=st.end() ){
            num = ans.back()+i;
                
            }
        
            ans.push_back(num);
            st.insert(num);
            
        }
        
        return ans;
    }
};
