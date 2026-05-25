class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (const auto& num : nums) {
            mp[num]++;
        }
        vector<pair<int,int>>freq;
        for(const auto &it:mp){
            freq.push_back({it.second,it.first});
        }
        sort(freq.begin(),freq.end(),greater<>());
        for(int i=0;i<k;i++){
           ans.push_back(freq[i].second); 
        }

        return ans;    
    }
};
