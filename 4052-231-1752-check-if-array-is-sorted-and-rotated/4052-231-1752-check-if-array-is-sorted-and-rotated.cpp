class Solution {
public:
    // bool check(vector<int>& nums) {
    //     vector<int> arr;
    //     int n=nums.size();
    //     int small = nums[0];
    //     int indexofsmall=0;

    //     for(int i =1;i<n;i++){
    //         if(nums[i]<small){
    //             small=nums[i];
    //             indexofsmall=i;
    //         }
    //     }

    //     for(int i=indexofsmall;i<n;i++){
    //         arr.push_back(nums[i]);
    //     }

    //     for(int i=0;i<indexofsmall;i++){
    //         arr.push_back(nums[i]);
    //     }

    //     for (int i=0; i<n-1; i++) {
    //         if (arr[i]>arr[i+1]) {
    //         return false;
    //         }
    //     }
    //     return true;
    //  }
    bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    // Count the number of times the array violates the sorted order
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }

    // If there is at most one break in sorted order, return true
    return count <= 1;
}

};