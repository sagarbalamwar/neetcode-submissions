class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int area=0;
        while(l<r){
            int res=(r-l)*min(heights[l],heights[r]);
            area=max(area,res);
            if(heights[l]<heights[r]) l++;
            else r--;
        }
        return area;
    }
};
