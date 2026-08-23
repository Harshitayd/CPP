class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;

        function<void(TreeNode*)> preorder = [&](TreeNode* node) {
            if (node == nullptr)
                return;

            result.push_back(node->val); // Root
            preorder(node->left);        // Left
            preorder(node->right);       // Right
        };

        preorder(root);
        return result;
    }
};