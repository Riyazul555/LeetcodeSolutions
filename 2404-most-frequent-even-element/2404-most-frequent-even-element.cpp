class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> ans;

        int nil = -1;
        int most = 0;

        for(int it : nums){
            if(it % 2 == 0){
                ans[it]++;

                if(ans[it] > most || (ans[it] == most && it<nil)){
                    nil = it;
                    most = ans[it];
                }
            }
        }
        return nil;
    }
};