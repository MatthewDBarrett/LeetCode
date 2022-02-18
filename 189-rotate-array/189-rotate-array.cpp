class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int numsSize = nums.size();
        vector<int> temp(numsSize);

        for ( int i = 0; i < numsSize; i++ ) { 
            int newIndex = i + k ;
            
            newIndex = newIndex - (newIndex/numsSize) * numsSize;
                
            temp[newIndex] = nums[i];
        }
        nums = temp;
    }
};