class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1, maxArea=0;
        while(left<=right){

        int area= abs(right-left) * min(height[left],height[right]);
        maxArea= max(area,maxArea);
        if(height[left]>height[right])
            right--;
        else if(height[left]<height[right])
            left++;
        else{
            left++;right--;
        }
    }

    return maxArea;
    }
};