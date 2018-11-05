

  public class ListNode {
      public int val;
      public ListNode next;
      public ListNode(int x) { val = x; }
  }
 
public class Solution {
    public ListNode SwapPairs(ListNode head) {
        if(head==null)return head;
        if(head.next==null)return head;
        int tempA=0;
        ListNode temp=head;
        while(head!=null){
            tempA=head.val;
            if(head.next==null)break;
            head.val=head.next.val;
            head.next.val=tempA;
            head=head.next.next;
        }
        return temp;
    }
}