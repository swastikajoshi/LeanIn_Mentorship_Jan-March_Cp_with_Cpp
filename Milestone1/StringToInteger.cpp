class Solution {
public:
    int myAtoi(string s) {
        if(s.empty())
            return 0;
        int len=s.size();
        int i=0,flag=1;
        while(i<len && s[i]==' ')
            i++;
        if(i==len)
            return 0;
        if(s[i]=='-')
        {
            flag=0;
            i++;
        }
        else if(s[i]=='+')
            i++;
        long int x=0;
        while(s[i]>='0' && s[i]<='9')
        {
            x=x*10;
            if(x<=INT_MIN || x>=INT_MAX)
                break;
            x=x+(s[i]-'0');
            i++;
        }
        if(flag==0)
            x=-1*x;
        if(x<=INT_MIN)
            return INT_MIN;
        if(x>=INT_MAX)
            return INT_MAX;
        return (int)x;
        
    }
};
