class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0,hi=m*n-1;
        while(low<=hi){
            int mid=low+(hi-low)/2;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target){
                return true;
            }else if(matrix[row][col]<target){
                low=mid+1;
            }else{
                hi=mid-1;
            }
        }
        return false;

    }
};
