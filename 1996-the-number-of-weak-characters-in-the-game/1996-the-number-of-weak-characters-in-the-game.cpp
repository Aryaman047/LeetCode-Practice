class Solution {
public:
   static bool comp(vector<int> &a,vector<int> &b)
    {
        if(a[0]==b[0])  return a[1]>b[1];
        
        return a[0]<b[0];
    }
    
    
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int z = properties.size();
        //SOrt
        sort(properties.begin(),properties.end(),comp);
        
        //Now comparing
        int maxd = INT_MIN;
        int c=0;
        
        for(int i=z-1;i>=0;i--)
        {
            if(properties[i][1]<maxd)
            {
                c++;
            }
            maxd = max(properties[i][1],maxd);
        }
        
        return c;
    }
};