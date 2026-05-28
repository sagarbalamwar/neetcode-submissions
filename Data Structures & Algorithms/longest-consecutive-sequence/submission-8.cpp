class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int len = 1, maxLen = 1;
        unordered_set<int> st;
        for (const auto& num : nums) {
            st.insert(num);
        }
        for (const auto& num : st) {
            if (st.find(num - 1) == st.end()) {
                len=1;
                int current = num;
                while (st.find(current + 1) != st.end()) {
                    current++;
                    len++;
                }
            }
            maxLen = max(len, maxLen);
        }
        return maxLen;
    }
};
