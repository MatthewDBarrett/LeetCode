class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> tempMat;
        
        for ( int i = 0; i < mat.size(); i++ )
            for ( int j = 0; j < mat[i].size(); j++ ) 
                tempMat.push_back( mat[i][j] );
        
        vector<vector<int>> transMat(r, vector<int>(c));

        if ( tempMat.size() != r * c )
            return mat;
                
        int count = 0;
        
        for ( int i = 0; i < r; i++ ) {
            for ( int j = 0; j < c; j++ ) {
                transMat[i][j] = tempMat[count];
                count++;
            }
        }
        
        return transMat;
    }
};