class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int negative = 0;
        int zero = 0;

        for(int i=0;i<n;i++){
            if(nums[i]<0){
                negative++;
            }
            else if(nums[i]==0){
                zero++;
            }
        }

        if(zero>0){
            return 0;
        }
        else if(negative%2==0){
            return 1;
        }
        return -1;
    }
};