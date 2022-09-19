class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        unordered_map<string,vector<string>> m;
        for(auto it: paths)
        {
            stringstream ss(it);
            string root,str;
            
            getline(ss,root, ' ');
            while(getline(ss,str, ' '))
            {
                string name =root + '/' + str.substr(0,str.find('('));
                string content = str.substr(str.find('(') + 1, str.find(')') - str.find('(') -1);
                m[content].push_back(name);
            }
        }
        
        vector<vector<string>> ans;
        
        
        for(auto it:m)
        {
            if(it.second.size()>1)
            {
                ans.push_back(it.second);
            }
        }
        
        
        return ans;
        
        
    }
};