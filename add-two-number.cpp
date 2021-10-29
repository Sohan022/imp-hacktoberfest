class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1 = l1, *t2 = l2;
        ListNode *head = new ListNode(0);
        ListNode *temp = head;
        int carry = 0;
        while(t1 != NULL && t2 != NULL){
            int sum = t1->val + t2->val+carry;
            t1->val = (sum)%10;
            temp->next = t1;
            t1 = t1->next;
            t2 = t2->next;
            temp = temp->next;
            if(sum > 9){
                carry = 1;
            }
            else{
                carry = 0;
            }
        }
        while(t1 != NULL){
            int sum = t1->val+carry;
            t1->val = sum%10;
            temp->next = t1;
            t1 = t1->next;
            temp = temp->next;
            carry = (sum > 9 ? 1 : 0);
        }
        while(t2 != NULL){
            int sum = t2->val+carry;
            t2->val = sum%10;
            temp->next = t2;
            t2 = t2->next;
            temp = temp->next;
            carry = (sum > 9 ? 1 : 0);
        }
        if(carry){
            ListNode *nn = new ListNode(1);
            temp->next = nn;
        }
        return head->next;
    }
};
