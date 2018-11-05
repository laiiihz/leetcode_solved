public class Solution {
    public int RemoveDuplicates( int[] nums) {
        
        int amount=nums.Length;
        if(amount==0)return 0;
        int digit=0;
        for(int i=0;i<amount;i++){
            if(nums[i]!=nums[digit]){
                digit++;
                nums[digit]=nums[i];
            }
        }

        return digit+1;
    }
}