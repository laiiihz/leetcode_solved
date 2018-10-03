using System;

namespace longest_substring_without_repeating_characters
{
    class Program
    {
        static void Main(string[] args)
        {
            string a="";
            Solution solution=new Solution();
            int result=solution.LengthOfLongestSubstring(a);
            Console.WriteLine(result);
        }
    }
}
