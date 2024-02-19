class Solution{
public:
    int minValue(string s, int k){
        // code here
    map<char,int>mp ;
        for(int i=0;i<s.size();i++)mp[s[i]]++ ;
        priority_queue<int>pq ;
        for(auto it:mp)pq.push(it.second) ;
        while(k!=0){
            int top = pq.top() ;
            pq.pop() ;
            top-- ;
            k-- ;
            pq.push(top) ;
        }
        int sum=0 ;
        while(!pq.empty()){
            // cout << pq.top() << " " ;
            sum+= (pq.top()*pq.top()) ;
            pq.pop() ;
        }
        // cout << endl;
        return sum ;
    }
};
