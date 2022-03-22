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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> result;
        if(!root)
            return result;
        st.push(root);
        TreeNode* head=root;
        while(!st.empty())
        {
            TreeNode* top=st.top();
            if((top->left==NULL && top->right==NULL) || top->right==head || top->left==head)
            {
                result.push_back(top->val);
                st.pop();
                head=top;
            }
            else
            {
                if(top->right!=NULL)
                {
                    st.push(top->right);
                }
                if(top->left!=NULL)
                {
                    st.push(top->left);
                }
            }
        }
        return result;
    }
};
