class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX, max = 0;
        for (int c: prices) {
            if ( c < min )
                min = c;
            if ( c - min > max )
                max = c - min;
        }
        return max;       
    }
};