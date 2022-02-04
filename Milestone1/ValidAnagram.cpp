class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1=s.size();
        int len2=t.size();
        if(len1!=len2)
            return false;
        int count[26]={0};
        for(int i=0;i<len1;i++)
            count[s[i]-'a']++;
        for(int i=0;i<len1;i++)
        {
            count[t[i]-'a']--;
            if(count[t[i]-'a']<0)
                return false;
        }
        return true;
    }
};
