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
    vector<int> findMode(TreeNode* root) {
        if (!root) return {};

        vector<int> res;
        int cnt = 0, mxcnt = 0, prev = INT_MAX;
        function<void (TreeNode*)> findCnt = [&](TreeNode* node) {
            if (!node) return;

            // inorder traversal
            findCnt(node->left);

            node->val == prev ? cnt++ : cnt = 1, prev = node->val;
            if (cnt == mxcnt) {
                res.emplace_back(prev);
            } else if (cnt > mxcnt) {
                res = {node->val};
                mxcnt = cnt;
            }
            
            findCnt(node->right);
        };
        findCnt(root);
        return res;
    }
};