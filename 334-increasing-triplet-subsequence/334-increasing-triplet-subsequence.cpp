class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        if(len<3) return false;
    
        int l = INT_MAX;
        int mid = INT_MAX;
        
        
        for(int i=0;i<len;i++)
        {
            if(nums[i]>mid) return true;
            else if(nums[i]>l && nums[i]<mid) mid = nums[i];
            else if(nums[i]<l) l = nums[i];
        }
        return false;
    }
};