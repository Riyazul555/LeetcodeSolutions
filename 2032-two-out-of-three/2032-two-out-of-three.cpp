
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int>ans, res;
        
        for(int num : nums1){
            if(find(nums2.begin(), nums2.end(), num) != nums2.end() || find(nums3.begin(), nums3.end(), num) != nums3.end()){
                ans.insert(num);
                res.insert(num);
            }
        }
        for(int num : nums2){
            if(find(nums1.begin(), nums1.end(), num) != nums1.end() || find(nums3.begin(), nums3.end(), num) != nums3.end()){
                ans.insert(num);
                res.insert(num);
            }
        }
        for(int num : nums3){
              if(find(nums2.begin(), nums2.end(), num) != nums2.end() || find(nums1.begin(), nums1.end(), num) != nums1.end()){
                  ans.insert(num);
                  res.insert(num);
              }
        }
        return vector<int>(res.begin(),res.end());
    }
};