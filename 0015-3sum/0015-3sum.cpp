class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        int i;
        
        for(int i=0; i<n-2; i++){
            int j=i+1,k=n-1;
            while(j<k){
                if((nums[i] + nums[j] + nums[k]) ==0){
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    ans.push_back(triplet);
                    while (j < k && nums[j] == triplet[1]) j++;
                    while (j < k && nums[k] == triplet[2]) k--;
                }
                else if((nums[i] + nums[j] + nums[k]) < 0){
                    j++;
                }
                else{
                    k--;
                }
                while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
                    i++;
            }
        }
        return ans;
    }
};