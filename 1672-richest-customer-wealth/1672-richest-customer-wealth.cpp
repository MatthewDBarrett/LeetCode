class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int highestWealth = 0;
        
        for ( int i = 0; i < accounts.size(); i++ ) {
            int totalWealth = 0;
            for ( int j = 0; j < accounts[i].size(); j++ ) {
                totalWealth += accounts[i][j];
            }
            highestWealth = max( totalWealth, highestWealth );
        }
        
        return highestWealth;
    }
};