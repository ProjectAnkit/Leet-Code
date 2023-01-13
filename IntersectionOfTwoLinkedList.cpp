
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

       ListNode *temp = headA;
       ListNode *temp1 = headB;
       ListNode *head = NULL;
       int n = 0;
       int m = 0;
       while(temp!=NULL)
       {
            temp = temp->next;
            n++;
       }
       while(temp1!=NULL)
       {
            temp1 = temp1->next;
            m++;
       }
       
       if(m>n)
       {
          swap(headB,headA);
          swap(m,n);
       }
       int i=0;
       while(0<(n-m-i))
       {
           headA = headA->next;
           i++;
       }
      
        while(headA!=headB)
           {
               headA= headA->next;
               headB = headB->next;
           }
       return headA;
    }
};
