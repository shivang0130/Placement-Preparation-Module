class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back({nums[i],i});
        }
        sort(ans.begin(), ans.end());
        int s=0,e=nums.size()-1;
        while(s<e){
            int sums = ans[s].first + ans[e].first;
            if(sums == target){
                return{ans[s].second, ans[e].second};
            }
            else if(sums > target){
                e--;
            }
            else{
                s++;
            }
        }
        return {-1,-1};
    }
};