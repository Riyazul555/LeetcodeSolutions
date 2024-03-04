class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int last = nums[n-1];
        int first = nums[0];
        int ans = 0;

        for(int i=1;i<=last;i++){
            if(last%i==0 && first%i==0){
                ans = i;
            }
        }
        return ans;
    }
};