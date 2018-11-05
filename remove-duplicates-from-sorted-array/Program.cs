using System;

namespace remove_duplicates_from_sorted_array
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] nums={0,1,1,1,2,3,4,4,4,5,5,5,5,6,6};
            Solution solution=new Solution();
            int number=solution.RemoveDuplicates( nums);
            Console.WriteLine(number);
            for(int i=0;i<number;i++){
                Console.Write(nums[i]);
            }
            Console.WriteLine("Hello World!");
        }
    }
}
