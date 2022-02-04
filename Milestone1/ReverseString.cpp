class Solution {
public:
    void reverseString(vector<char>& s) {
        int len=s.size();
        int beg=0;
        int end=len-1;
        while(beg<=end)
        {
            swap(s[beg],s[end]);
            beg++;
            end--;
        }
    }
};
