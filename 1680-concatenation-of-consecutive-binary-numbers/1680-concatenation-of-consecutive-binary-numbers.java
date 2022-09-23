class Solution {
    public int concatenatedBinary(int n) {
        
        final int M = 1000000007;
        long number = 1;
        for(int i=2;i<=n;i++)
        {
            number <<= BitSet.valueOf(new long[]{i}).length();
            number+=i;
            number %= M;
        }
        
       
        return (int) number;
        
        
    }
}