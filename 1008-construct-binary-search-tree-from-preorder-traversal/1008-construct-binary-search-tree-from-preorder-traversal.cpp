class Solution {
public:
    TreeNode* construct(vector<int>& preorder, int ub, int& i)
    {
        if(i == preorder.size() || preorder[i] > ub)
            return NULL;
        cout<<i<<endl;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = construct(preorder, root->val, i);
        root->right = construct(preorder, ub, i);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return construct(preorder, INT_MAX, i);
    }
};



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