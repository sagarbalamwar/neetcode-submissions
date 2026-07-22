class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int end=numbers.size()-1;
        int i=0;
        while(i<end){
            if(numbers[i]+numbers[end]==target){
                return {i+1,end+1};
            }else if(numbers[i]+numbers[end]>target) end--;
            else i++;
        }
        return {};
    }
};
