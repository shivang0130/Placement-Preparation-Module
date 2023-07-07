class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0, maxSum=INT_MIN;
        int n= nums.size();
        for(int i=0; i<n; i++){
            currentSum += nums[i];
            
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};