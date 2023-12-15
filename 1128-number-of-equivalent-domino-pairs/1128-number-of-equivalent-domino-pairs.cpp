class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> countMap;
    int result = 0;

    for (const auto& domino : dominoes) {
        int hash = min(domino[0], domino[1]) * 10 + max(domino[0], domino[1]);
        result += countMap[hash];
        countMap[hash]++;
    }

    return result;
    }
};