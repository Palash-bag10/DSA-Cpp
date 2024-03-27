
// Find the Duplicate Number [LEETCODE 287]

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.


class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Approach: 1 [Sorting -> O(nlogn) & O(1)]

        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return -1;

        // Approach: 2 [Negative Marking Method] [Here we modify array]
        // T.C -> O(n) / S.C -> O(1)

        int ans = -1;
        for(int i=0; i<nums.size(); i++){
            int index = abs(nums[i]);
            if(nums[index] < 0){
                ans = index;
                break;
            }
            nums[index] *= -1;
        }
        return ans;

        // Approach 3 
        // T.C -> O(n) / S.C -> O(1)

        while(nums[0] != nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }  
};