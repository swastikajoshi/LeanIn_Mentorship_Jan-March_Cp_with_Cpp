class Solution {
public:
    int firstUniqChar(string s) {
        int len=s.size();
        map<char,int> mp;
        for(int i=0;i<len;i++)
            mp[s[i]]++;
        for(int i=0;i<len;i++)
        {
            if(mp[s[i]]==1)
                return i;
        }
        return -1;
    }
};
