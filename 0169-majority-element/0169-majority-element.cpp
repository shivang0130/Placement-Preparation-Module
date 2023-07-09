class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, element;
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                count++;
                element = nums[i];
            }
            else if(nums[i] == element){
                count++;
            }
            else
                count--;
        }
        
        int checkElement=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==element)
                checkElement++;
        }
        if(checkElement > nums.size()/2)
            return element;
        return -1;
    }
};