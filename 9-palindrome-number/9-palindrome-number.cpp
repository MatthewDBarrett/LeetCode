class Solution {
public:
    bool isPalindrome(int x) {
        string xString = to_string(x);
        
        for ( int i = 0; i < xString.size(); i++ )
            if ( !(xString.at(i) == xString.at(xString.size()- 1 - i)))
                return false;

        return true;
    }
};