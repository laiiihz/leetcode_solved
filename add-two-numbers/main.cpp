#include <iostream>
using namespace std;



  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result=new ListNode(0);
        ListNode *temp=result;
        int overed=0;
        while(l1!= nullptr ||l2!= nullptr){
            if(l1!= nullptr){
                overed=overed+l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr){
                overed=overed+l2->val;
                l2=l2->next;
            }
            temp->next=new ListNode(overed%10);
            overed=overed/10;
            temp=temp->next;
        }
        if(overed!=0){
            temp->next=new ListNode(1);
        }

        result=result->next;
        return result;

    }
};
int main() {
    Solution solution;
    ListNode *listNode=new ListNode(2);
    ListNode *listNode1=new ListNode(1);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}