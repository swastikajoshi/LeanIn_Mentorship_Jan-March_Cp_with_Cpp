/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> p,q;
        vector<int>result;
        if(!root)
            return result;
        p.push(root);
        while(1){
            int last;
            while(!p.empty()){
                TreeNode* cur=p.front();
                if(cur->left)
                    q.push(cur->left);
                if(cur->right)
                    q.push(cur->right);
                last=cur->val;
                p.pop();
            }
            result.push_back(last);
            p=q;
            while(!q.empty())
            {
                q.pop();
            }
            if(p.empty())
                return result;
        }
    }
};
