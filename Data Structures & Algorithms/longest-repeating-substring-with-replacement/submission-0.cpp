class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>freq;
        int windowStart=0,maxLen=0,maxFreq=0;
        for(int windowEnd=0;windowEnd<s.size();windowEnd++){
            freq[s[windowEnd]]++;
            maxFreq=max(maxFreq,freq[s[windowEnd]]);
            int windowLen=windowEnd-windowStart+1;
            if(windowLen-maxFreq>k){
                freq[s[windowStart]]--;
                windowStart++;
            }
            maxLen=max(maxLen,windowEnd-windowStart+1);
        }
        return maxLen;
    }
};
