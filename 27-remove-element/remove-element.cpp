class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i;
        int start=0;  // start is points to variable location
        int n = nums.size();

        if(n==0)
            return 0;

            for(i=0;i<n;i++){
                if(nums[i]!=val)
                {
                    nums[start++]=nums[i];
                }
            }
        
        return start;

        
    }
};