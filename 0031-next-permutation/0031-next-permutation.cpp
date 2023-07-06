class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int index=-1;
        for(int j = n-2; j>=0; j--){
            if(nums[j] < nums[j+1]){
                index = j;
                break;
            }
        }
        if(index == -1){
            reverse(nums.begin(), nums.end());
            return ;
        }
        for(int i=n-1; i>index; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1, nums.end());
        
    }
};