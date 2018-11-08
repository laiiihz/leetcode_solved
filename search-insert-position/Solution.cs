public class Solution {
    public int SearchInsert(int[] nums, int target) {
        if(target<=nums[0])return 0;
        int counter=nums.Length;
        int low=0;
        int high=counter;
        while(low<high){
            int midnum=(high+low)/2;
            if(high==low+1)return high;
            else if(target<nums[midnum])high=midnum;
            else if(target>nums[midnum])low=midnum;
            else return midnum;
        }
        return low;
    }
}