class Solution{
public:	
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    if(n==1){
	        return {"1"};
	    }
	    
	    vector<string>ans = NBitBinary(n-1);
	    vector<string>ansi;
	    int siz = ans.size();
	    for(int i=0;i<siz;i++){
            string t = ans[i];
            int ct1 = 0;
            int ct0 = 0;
            for(int i=0;i<t.size();i++){
                ct1+=(t[i]=='1');
                ct0+=(t[i]=='0');
            }
	        if(ct1 > ct0){
	            t.push_back('1');
	            ansi.push_back(t);
	            
	            t = ans[i];
	            t.push_back('0');
	            ansi.push_back(t);
	        }
	        else{
	            t.push_back('1');
	            ansi.push_back(t);
	        }
	    }
        return ansi;	   
	}
};
