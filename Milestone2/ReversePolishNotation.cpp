class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>nums;
        int l1=tokens.size();
        for(int i=0;i<l1;i++)
        {
            string s = tokens[i];
            int l2=s.size();
            if(isdigit(s[0]) || l2>1)
            {
                nums.push(stoi(s));
                continue;
            }
            int a = nums.top();
            nums.pop();
            
            int b = nums.top();
            nums.pop();
            
            if(s=="+")
            {
                nums.push(a+b);
            }
            else if(s=="-")
            {
                nums.push(b-a);
            }
            else if(s=="*")
            {
                nums.push(a*b);
            }
            else
            {
                nums.push(b/a);
            }
        }
        return nums.top();
    }
};
