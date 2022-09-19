class Solution {
public:
    int count_words(string str)
    {
        int c=0;
        str = str + " ";
        for(int it = 0;it<str.size();it++)
        {
            if(str[it] == ' ')
            {
                c+=1;
            }
        }
        return c;
    }
    
    
    
    
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int ans = INT_MIN;
        
        
        for(int i=0;i<n;i++)
        {
           int maximumlen = count_words(sentences[i]);
            ans = max(ans,maximumlen);
        }
        
    return ans;
    }
};