class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len=nums.size();
        int flag=0;
        for(int i=0;i<len;i++)
        {
            flag^=nums[i];
        }
        return flag;
    }
};
