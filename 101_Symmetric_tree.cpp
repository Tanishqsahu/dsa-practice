class Solution {
public:
    bool mirror(TreeNode* left, TreeNode* right) {

        
        if (left == NULL && right == NULL)
            return true;

        
        if (left == NULL || right == NULL)
            return false;

        
        if (left->val != right->val)
            return false;

        
        return mirror(left->left, right->right) &&
               mirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        return mirror(root->left, root->right);
    }
};


//Another Approach

class Solution {
public:
    bool isSymmetric(TreeNode* root) {

        queue<pair<TreeNode*, TreeNode*>> q;

        q.push({root->left, root->right});

        while (!q.empty()) {

            auto [left, right] = q.front();
            q.pop();

    
            if (left == NULL && right == NULL)
                continue;

        
            if (left == NULL || right == NULL)
                return false;

            
            if (left->val != right->val)
                return false;

        
            q.push({left->left, right->right});
            q.push({left->right, right->left});
        }

        return true;
    }
};