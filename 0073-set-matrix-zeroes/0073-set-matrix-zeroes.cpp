class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> setRow, setCol;

        for(int i=0; i< n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    setRow.insert(i);
                    setCol.insert(j);
                }
            }
        }

        for(int i=0; i< n; i++){
            for(int j=0; j<m; j++){
                if(setRow.count(i) > 0 || setCol.count(j) > 0){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};