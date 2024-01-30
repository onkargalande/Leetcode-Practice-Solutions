class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        int n=nums.size();
        if(n==0)
        return 0;

        for(i=0;i<nums.size();i++){
            if(nums[i]==target)
            return i;
            else if(nums[i]>target)
            return i;
        }
        return i;
        
    }
};