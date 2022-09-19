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
        vector<int> maximumlen(n);
        
        
        for(int i=0;i<n;i++)
        {
            maximumlen[i] = count_words(sentences[i]);
        }
        
        
        int maximum = *max_element(maximumlen.begin(),maximumlen.end());
        
        return maximum;
        
        
        
        
    }
};