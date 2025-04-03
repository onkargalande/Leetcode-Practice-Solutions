class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] > dp[i - 1] + nums[i]){
                dp[i]=nums[i];
            }
            else{
                dp[i]=dp[i-1] + nums[i];
            }

        }
        int ans=dp[0];
        for(int i = 1; i < n; i++){
            if(ans<dp[i]){
                ans=dp[i];
            }
        }

        return ans;
        
    }
};