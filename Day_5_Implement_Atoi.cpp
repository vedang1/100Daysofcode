class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int n =s.length();
        int ans=0;
        bool t=false;
        int p=0;
        int j=0;
        if(s[0]=='-'){
                t=true;
                j=1;
            }
            
        for(int i=j;i<n;i++){
            
            if(s[i]=='1')
                ans=ans*10+1;
            else if(s[i]=='2')
                ans=ans*10+2;
            else if(s[i]=='3')
                ans=ans*10+3;
            else if(s[i]=='4')
                ans=ans*10+4;
            else if(s[i]=='5')
                ans=ans*10+5;
            else if(s[i]=='6')
                ans=ans*10+6;
            else if(s[i]=='7')
                ans=ans*10+7;
            else if(s[i]=='8')
                ans=ans*10+8;
            else if (s[i]=='9')
                ans=ans*10+9;
            else if(s[i]=='0')
                ans=ans*10+0;
            else{
                return -1;
            }
        }
        if(t)
        return -1*ans;
        else
        return ans;
    }
};
