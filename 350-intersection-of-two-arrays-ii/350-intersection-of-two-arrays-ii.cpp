class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int low;
        int high;
        int mid;
        vector<int> result;
        
        if ( n1 == 1 && n2 == 1 )
            if ( nums1[0] == nums2[0] )
                return {nums1[0]};
        
        sort(nums2.begin(), nums2.end());
        
        for ( int i = 0; i < n1; i++ ) {
            low = 0;
            high = n2 -1;
            while ( low <= high ) {
                mid = low + ( high - low ) /2;
                int midVal = nums2[mid];
                
                if ( nums1[i] == midVal ) {
                    result.push_back(midVal);
                    nums2.erase(nums2.begin() + mid);
                    n2--;
                    break;
                }
                
                if ( nums1[i] > midVal )
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            
        }
        
        return result;
    }
};