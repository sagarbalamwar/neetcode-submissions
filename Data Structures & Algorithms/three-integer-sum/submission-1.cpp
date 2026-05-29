class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        for (int i = 0; i < nums.size(); i++) {
            int remTarget = -(nums[i]);
            unordered_set<int> seen;
            for (int j = i + 1; j < nums.size(); j++) {
                int needed = remTarget - nums[j];
                if (seen.find(needed) != seen.end()) {
                    vector<int> temp = {nums[i], nums[j], needed};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                } else {
                    seen.insert(nums[j]);
                }
            }
        }
        vector<vector<int>> ans;
        for (auto& arr : st) {
            ans.push_back(arr);
        }
        return ans;
    }
};
