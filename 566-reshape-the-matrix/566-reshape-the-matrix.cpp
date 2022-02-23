class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();     //rows
        int n = 0;              //columns
        
        
        vector<int> tempMat;
        
        for ( int i = 0; i < m; i++ )
            for ( int j = 0; j < mat[i].size(); j++ ) 
                tempMat.push_back( mat[i][j] );
        
        int t = tempMat.size();
        vector<vector<int>> transMat(r, vector<int>(c,0));

        if ( t != r * c )
            return mat;
        
//         for ( int i = 0; i < m; i++ ) {         //rows
//             n = mat[i].size();
//             for ( int j = 0; j < n; j++ ) {     //columns
                
//             }
//         }
        
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