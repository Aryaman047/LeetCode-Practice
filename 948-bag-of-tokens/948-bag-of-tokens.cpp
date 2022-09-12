class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {
        sort(tokens.begin(),tokens.end());
        
        int score = 0;int points = 0;int i = 0;int j = tokens.size()-1;
        
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power-=tokens[i++];
                score=max(score,++points);
            }
            else if(points>0)
            {
                points--;
                power+=tokens[j--];
            }
            else
            {
                break;
            }
        }
        
        return score;
    }
};