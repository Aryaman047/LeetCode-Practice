class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pos;
        int len = nums.size(),left=0,right=len-1;
        while(left<right)
        {
            int ans = nums[left]+nums[right];
            if(ans>target) --right;
            else if(ans<target) ++left;
            else 
            {
                pos.push_back(left+1);
                pos.push_back(right+1);
                return pos;
            }
        }
        return pos;
    }
};