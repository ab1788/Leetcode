class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>num;
        for(int i=0;i<n;i++){
            num.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            num.push_back(nums[i]);
        }
        return num;
    }
};