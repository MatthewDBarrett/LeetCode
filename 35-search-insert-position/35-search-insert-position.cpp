class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        int midVal;
        
        while ( high >= low ) {
            mid = low + ( high - low ) /2;
            midVal = nums[mid];
            
            if ( midVal == target )
                return mid;
            
            if ( midVal > target )
                high = mid - 1;
            else
                low = mid + 1;
        }
        
        if ( nums[mid] > target)
            return mid;
        else
            return mid + 1;
    }
};