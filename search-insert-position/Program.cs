using System;

namespace search_insert_position
{
    class Program
    {
        static void Main(string[] args)
        {
            Solution solution=new Solution();
            int[] a={1,2,3,4,6,7,9,11};
            int result=solution.SearchInsert(a,10);
            Console.WriteLine(result);
        }
    }
}
