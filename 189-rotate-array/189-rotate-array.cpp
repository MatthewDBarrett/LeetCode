class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int numsSize = nums.size();
        vector<int> temp(numsSize);
        
//         for ( int i = nums.size()-k; i <  nums.size(); i++ )
//             temp.push_back(nums[i]); 
        
//         for ( int i = 0; i < nums.size()-k; i++)
//             temp.push_back(nums[i]);
            
//         nums = temp;
        
        
        for ( int i = 0; i < numsSize; i++ ) { 
            int newIndex = i + k + 1;
            while ( newIndex > numsSize )
                newIndex -= numsSize;
                
            temp[newIndex-1] = nums[i];
        }
        nums = temp;
    }
};