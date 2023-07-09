class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        
        if(!matrix.size()) return false;
        
        int high = (matrix.size() * matrix[0].size()) - 1;
        
        while(low <= high){
            int mid=(low + (high-low) /2);
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()] < target){
                low = mid+1;
            }
            else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()] > target){
                high = mid-1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};