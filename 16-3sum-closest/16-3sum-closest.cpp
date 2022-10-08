class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest = nums[0]+nums[1]+nums[2];
        int len = nums.size(),left,right;
    for(int i=0;i<len-2;++i)
    {
        left = i+1;
        right = len-1;
      
        while(left<right)
        {
              int sum3 = nums[i] + nums[left] + nums[right];
            if(abs(closest - target)>(sum3 - target))
            {
                closest = sum3;
            }
            
            if(sum3==target)
            {
                return sum3;
            }
            
            if(sum3>target)
            {
                --right;
            }
            else
            {
                ++left;
            }
        }   
    }
    
        return closest;
    }
};