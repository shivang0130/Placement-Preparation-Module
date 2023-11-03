class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        vector<pair<int,int>> vp;
        for(int i=0; i<n; i++){
            vp.push_back({nums[i],i});
        }
        sort(vp.begin(), vp.end());
        int start=0, end=n-1;
        while(start<=end){
            int sum = vp[start].first + vp[end].first;
            if(sum==target){
                ans.push_back(vp[start].second);
                ans.push_back(vp[end].second);
                break;
            }
            else if(sum<target){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};