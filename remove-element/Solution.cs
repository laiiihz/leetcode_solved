
public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int count=nums.Length;
        int digit=0;
        for(int i=0;i<count;i++){
            if(nums[i]!=val){
                nums[digit]=nums[i];
                digit++;
            }
        }
        return digit++;
    }
}