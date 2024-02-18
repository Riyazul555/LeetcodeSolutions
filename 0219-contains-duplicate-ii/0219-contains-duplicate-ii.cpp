class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>ans;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(ans.find(nums[i]) != ans.end() && i - ans[nums[i]] <= k){
                return true;
            }
            ans[nums[i]] = i;
        }
        return false;
    }
};