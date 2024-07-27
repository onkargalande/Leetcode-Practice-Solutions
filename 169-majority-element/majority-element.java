class Solution {
    public int majorityElement(int[] nums) {
        
        int count = 0;
        int temp = 1;
        int postion = 0;
        for(int i= 0; i< nums.length; i++){
            for(int j = i+1; j< nums.length; j++){
                if(nums[i]==nums[j]){
                    
                    count++;
                   
                }
            }
            if(count>= temp){
                temp = count;
                 postion = i;
            }
            count = 0;
        }
        return nums[postion];

       
       
        
    }
}