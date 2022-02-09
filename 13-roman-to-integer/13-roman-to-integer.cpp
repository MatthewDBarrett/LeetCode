class Solution {
public:
    int romanToInt(string s) {
        int inputLength = s.size() - 1; //-1 for index value
        int count = 0;
        
        for ( int i = inputLength; i >= 0; i-- ) {
            if ( s.at(i) == 'I' ) {
                count += 1;
            }
            
            if ( s.at(i) == 'V' ) {
                if ( i != 0 ) {     //there are more characters to the left
                    if ( s.at(i-1) == 'I' ) {
                        count += 4;
                        i --;
                    } else
                        count += 5;
                } else
                    count += 5;    
            }
            
            if ( s.at(i) == 'X' ) {
                if ( i != 0 ) {     //there are more characters to the left
                    if ( s.at(i-1) == 'I' ) {
                        count += 9;
                        i--;
                    } else
                        count += 10;
                } else
                    count += 10;    
            }
            
            if ( s.at(i) == 'L' ) {
                if ( i != 0 ) {     //there are more characters to the left
                    if ( s.at(i-1) == 'X' ) {
                        count += 40;
                        i--;
                    } else
                        count += 50;
                } else
                    count += 50;    
            }
            
            if ( s.at(i) == 'C' ) {
                if ( i != 0 ) {     //there are more characters to the left
                    if ( s.at(i-1) == 'X' ) {
                        count += 90;
                        i--;
                    } else
                        count += 100;
                } else
                    count += 100;    
            }
            
            if ( s.at(i) == 'D' ) {
                if ( i != 0 ) {     //there are more characters to the left
                    if ( s.at(i-1) == 'C' ) {
                        count += 400;
                        i--;
                    } else
                        count += 500;
                } else
                    count += 500;    
            }
            
            if ( s.at(i) == 'M' ) {
                if ( i != 0 ) {     //there are more characters to the left
                    if ( s.at(i-1) == 'C' ) {
                        count += 900;
                        i--;
                    } else
                        count += 1000;
                } else
                    count += 1000;    
            }
            
            
        }
        
        return count;
    }
};