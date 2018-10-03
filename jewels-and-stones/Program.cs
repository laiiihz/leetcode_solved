using System;

namespace jewels_and_stones
{
    class Program
    {
        static void Main(string[] args)
        {
            Solution solution=new Solution();
            int a=solution.NumJewelsInStones("A","aweihfaiwghAAAAAAAAAAAAAA");
            Console.WriteLine(a);
        }
    }
}
