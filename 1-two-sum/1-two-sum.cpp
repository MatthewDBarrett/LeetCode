class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        
        for (int j = 0; j < nums.size(); j++){
            for ( int i = 0; i < nums.size(); i++){
                if ( i != j && nums[j] + nums[i] == target){
                    result = {j, i};
                    goto endloop;
                } 
            }
        }
        endloop:
        return result;
    }
};