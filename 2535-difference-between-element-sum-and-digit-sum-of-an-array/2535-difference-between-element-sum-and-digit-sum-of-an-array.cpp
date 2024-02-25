class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;

        for(auto i: nums){
            sum1 += i;

            while(i>0){
                sum2 += i%10;
                i=i/10;
            }
        }
        
        return abs(sum2-sum1);
      
    }
};