using System;

namespace divide_two_integers
{
    class Program
    {
        static void Main(string[] args)
        {
            Solution solution=new Solution();
            int a=solution.Divide(2147483647,2);
            Console.WriteLine(a);
        }
    }
}
