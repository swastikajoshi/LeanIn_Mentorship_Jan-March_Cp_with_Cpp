class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            char top = st.empty() ? '#' : st.top();
            if(top== '(' && s[i]==')'){
                st.pop();
             }else if(top == '{' && s[i] == '}') {
                st.pop();
            }else if(top == '[' && s[i] == ']') {
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};
