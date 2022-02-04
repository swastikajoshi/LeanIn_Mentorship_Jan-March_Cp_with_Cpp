class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len=nums.size();
        if(len==0)
            return false;
        map<int,bool> x;
        for(int i=0;i<len;i++)
        {
            if(x.find(nums[i])==x.end())
                x[nums[i]]=true;
            else
                return true;
        }
        return false;
    }
};
