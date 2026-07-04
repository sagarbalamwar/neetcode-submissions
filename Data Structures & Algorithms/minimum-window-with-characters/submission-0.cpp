class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        unordered_map<char, int> window;
        for (char ch : t) {
            need[ch]++;
        }
        int matched = 0;
        int left = 0;
        int minLength = INT_MAX;
        int startIndex = 0;
        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];
            window[ch]++;

            if (need.count(ch) && window[ch] == need[ch])
                matched++;

            while (matched == need.size()) {
                if (right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    startIndex = left;
                }

                char leftChar = s[left];
                window[leftChar]--;

                if (need.count(leftChar) && window[leftChar] < need[leftChar]) {
                    matched--;
                }

                left++;
            }
        }

        return minLength == INT_MAX ? "" : s.substr(startIndex, minLength);
    }
};
