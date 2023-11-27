class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s = arr.size();
        int n = arr[s-1];
        int j=0,c=0,ans=0;

        for(int i=1;i<=n+k;i++){
            if(i!=arr[j]){
                c++;
                if(c==k){
                    ans=i;
                    break;
                }
            }
            else if(i==arr[j]&& j<s-1){
                j++;
            }
        }
        return ans;
    }
};