class Solution {
public:
    int minCost(string s, vector<int>& neededTime) {
        int res = 0,max_c = 0,l = s.size();
        
        for(int i=0;i<l;++i)
        {
            if(i>0 && s[i]!=s[i-1])
            {
                max_c=0;
            }
            
            res +=min(max_c,neededTime[i]);
            max_c = max(max_c,neededTime[i]);
        }
        
        return res;
    }
};