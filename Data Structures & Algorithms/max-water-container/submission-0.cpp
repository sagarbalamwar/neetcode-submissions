class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                int res=(j-i)*min(heights[i],heights[j]);
                area=max(res,area);
            }
        }
        return area;
    }
};
