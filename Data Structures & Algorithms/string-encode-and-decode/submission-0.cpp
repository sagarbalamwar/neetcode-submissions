class Solution {
   public:
    string encode(vector<string>& strs) {
        string encode;
        for (const auto& s : strs) {
            encode += to_string(s.length());
            encode += "#";
            encode += s;
        }
        return encode;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.length()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,len);
            ans.push_back(word);
            i=j+len+1;
        }
        return ans;
    }
};
