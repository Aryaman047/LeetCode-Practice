class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       //We  apply pointer method after sorting the array
        vector<int> pos;
        
        unordered_map<int,int> mp;
       for(int i=0;i<nums.size();i++)
       {
           if(mp.find(target - nums[i])!= mp.end())
           {
               pos.push_back(mp[target-nums[i]]);
               pos.push_back(i);
               return pos;
           }
           else
           {
               mp[nums[i]] = i;
           }
       }
        
        return pos;
    }
};