class Solution {
public: 
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        
        while ( high >= low ) {
            mid = low + (high - low) / 2;
            int midVal = nums[mid];

            if ( midVal == target )
                return mid;

            if ( midVal < target )
                low = mid + 1;
            else
                high = mid -1;
        }
        
        return -1;
    }
};