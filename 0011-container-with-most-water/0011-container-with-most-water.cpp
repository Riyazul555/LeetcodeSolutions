class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size()-1;
        int left = 0;
        int maxArea =  0;
        while(left<right){
            int area = min(height[left], height[right]) * (right-left);
            maxArea = max(maxArea,area);

            if(height[left]< height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};