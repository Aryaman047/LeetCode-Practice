class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int l = matrix.size();
        vector<int> numbers;
        
        //O(n2)
for(int i=0;i<l;i++)
{
    for(int j = 0;j<l;j++)
    {
        numbers.push_back(matrix[i][j]);
    }
}
        
        //O(nlogn)
        sort(numbers.begin(),numbers.end());
        
        return numbers[k-1];
        
        
        
        
        
    }
};