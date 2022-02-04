class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())
        {
            return true;
        }
        int len=s.length();
        int beg=0;
        int end=len-1;
        while(beg<end)
        {
            if(tolower(s[beg])==tolower(s[end]))
            {
                beg++;
                end--;
            }
            else if(!isalpha(s[beg]) && !isdigit(s[beg]))
            {
                beg++;
            }
            else if(!isalpha(s[end]) && !isdigit(s[end]))
            {
                end--;
            }
            else
                return false;
        }
        return true;
    }
};
