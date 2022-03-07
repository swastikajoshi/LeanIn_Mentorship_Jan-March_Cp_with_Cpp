class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* last=head;
        ListNode* current=head->next;
        while(current!=NULL)
        {
            if(current->val==last->val)
            {
                last->next=current->next;
            }
            else
            {
                last=current;
            }
            current=current->next;
        }
        return head;
    }
};
