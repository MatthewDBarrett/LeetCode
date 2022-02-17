class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count = -10000;
        int result = -10000;
        
        for ( int i = 0; i < nums.size(); i++ ) { 
            int current = nums[i];
            count += current;
            
            if ( current > count )
                count = current;     
            
            if ( count > result )
                result = count;
        }
        return result;
    }
};