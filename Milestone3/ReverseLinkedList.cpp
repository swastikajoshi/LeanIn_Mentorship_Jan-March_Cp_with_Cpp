class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode *previous=head;
        ListNode *current=head->next;
        head->next=NULL;
        while(current->next)
        {
            ListNode *next=current->next;
            current->next=previous;
            previous=current;
            current=next;
        }
        current->next=previous;
        return current;
    }
};
