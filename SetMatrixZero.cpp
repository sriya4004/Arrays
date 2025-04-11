//better tc: O(2 x N X M)   SC: O(n) 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>row(m,0);
        vector<int>col(n,0);
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};


//optimal
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col0 = 1;  // flag to check if first column should be zeroed

        // Step 1: Use first row and first column as markers
        for(int i = 0; i < m; i++) {
            if(matrix[i][0] == 0) col0 = 0;  // check first column separately
            for(int j = 1; j < n; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;  // mark corresponding row
                    matrix[0][j] = 0;  // mark corresponding column
                }
            }
        }

        // Step 2: Update cells based on markers
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: Zero out the first row if needed
        if(matrix[0][0] == 0) {
            for(int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 4: Zero out the first column if needed
        if(col0 == 0) {
            for(int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
