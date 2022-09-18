class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        
        vector<int> leftmax(n) , rightmax(n);
        
        for(int i = 1; i<n;++i)
        {
            leftmax[i] = max(height[i-1], leftmax[i-1]);
        }
            for(int i=n-2;i>=0;--i)
            {
                rightmax[i] = max(height[i+1],rightmax[i+1]);
                
            }
        
        int ans = 0;
        
        for(int i = 0; i<n;++i)
        {
            int waterlevel = min(leftmax[i],rightmax[i]);
            if(waterlevel >= height[i])
            {
                ans+=waterlevel - height[i];
            }
        }
        
        
        return ans;
        
        //A ith bar can trap the water if and only if there exists a higher bar to the left and a higher bar to //the right of ith bar.
//To calculate how much amount of water the ith bar can trap, we need to look at the maximum height of the left //bar and the maximum height of the right bar, then
//The water level can be formed at ith bar is: waterLevel = min(maxLeft[i], maxRight[i])
//If waterLevel >= height[i] then ith bar can trap waterLevel - height[i] amount of water.
//To achieve in O(1) when looking at the maximum height of the bar on the left side and on the right side of ith bar, we pre-compute it:
//Let maxLeft[i] is the maximum height of the bar on the left side of ith bar.
//Let maxRight[i] is the maximum height of the bar on the right side of ith bar.
        
    }
};