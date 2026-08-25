class Solution {
public:

    int ans=INT_MIN;
    int solve(TreeNode*root){
        if(root==NULL) return 0;
        int left=max(0,solve(root->left));
        int right=max(0,solve(root->right));

        int current=left+root->val+right;

        ans=max(ans,current);

        return root->val+max(left,right);

        
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return ans;
        
    }
};