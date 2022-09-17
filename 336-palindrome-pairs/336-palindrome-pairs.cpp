class Solution {
public:
    
     bool is_palindrome(string& s, int start, int end) {
        while(start < end) {
            if(s[start++] != s[end--]) {
                return false;
            }
        }
        return true;
        
    }

    
    vector<vector<int>> palindromePairs(vector<string>& words) {
      vector<vector<int>> result;
        
      unordered_map <string,int> dict;
        //storing location of each word
        for(int i =0;i<words.size();i++)
        {
            dict[words[i]] = i;
        }
        
        
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<=words[i].length();j++)
            {
                //suffix check
                if(is_palindrome(words[i],j,words[i].size()-1))
                {
                    string suffix = words[i].substr(0,j);
                    reverse(suffix.begin(),suffix.end());
                    if(dict.find(suffix)!=dict.end() && i!=dict[suffix])
                    {
                        result.push_back({i,dict[suffix]});
                    }
                }
                
                
                if(j>0 && is_palindrome(words[i],0,j-1))
                {
                    string prefix = words[i].substr(j);
                    reverse(prefix.begin(),prefix.end());
                    if(dict.find(prefix)!=dict.end() && dict[prefix]!=i)
                    {
                        result.push_back({dict[prefix],i});
                    }
                }
                
                
            }
        }
        return result;
    }
};