class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> arr;
        for(int i=n-k;i<n;i++){
            arr.push_back(nums[i]);
        }

        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }

        // for(int i=k-1,j=0;j<k;i--,j++){
        //     nums[j]=arr[i];
        // }

         for (int i = 0; i < k; i++) {
            nums[i] = arr[i];
    }
        

    }
};