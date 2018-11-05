using System;

namespace swap_nodes_in_pairs
{
    class Program
    {
        static void Main(string[] args)
        {
            ListNode result=new ListNode(1);
            result.next=new ListNode(2);
            result.next.next=new ListNode(3);
            result.next.next.next=new ListNode(4);

            Solution solution=new Solution();
            solution.SwapPairs(result);
            solution.SwapPairs(null);
        }
    }
}
