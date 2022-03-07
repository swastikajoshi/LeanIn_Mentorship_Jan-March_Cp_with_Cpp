class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>v,rev;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            rev.push_back(temp->val);
            temp=temp->next;
        }
        reverse(rev.begin(),rev.end());
        return v==rev;
    }
};
