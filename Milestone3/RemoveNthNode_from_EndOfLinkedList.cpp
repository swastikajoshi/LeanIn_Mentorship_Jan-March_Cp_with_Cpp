class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* a;
        ListNode* b;
        a=head;
        b=head;
        while(n)
        {
            a=a->next;
            n--;
        }
        if(a==NULL)
        {
            head=head->next;
            return head;
        }
        while(a->next)
        {
            b=b->next;
            a=a->next;
        }
        if(b->next && b->next->next)
        {
            b->next=b->next->next;
        }
        else
        {
            b->next=NULL;
        }
        return head;
    }
};
