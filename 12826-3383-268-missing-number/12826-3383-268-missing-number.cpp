class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==i){
                j++;
                continue;
            }
            else{
                return i;
            }
        }
        return j;
    }
};