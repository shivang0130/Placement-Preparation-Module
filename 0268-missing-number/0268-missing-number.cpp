class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0, n=nums.size();
        for(int i=0; i<n; i++){
            sum += nums[i];
        }
        int ans = abs(sum - (n*(n+1)/2));
        return ans;
    }
};