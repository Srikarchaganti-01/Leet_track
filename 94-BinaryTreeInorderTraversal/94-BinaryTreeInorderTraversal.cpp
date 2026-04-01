// Last updated: 4/1/2026, 7:39:15 PM
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& v) {
        if (root == nullptr) return;

        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorder(root, v);
        return v;
    }
};
