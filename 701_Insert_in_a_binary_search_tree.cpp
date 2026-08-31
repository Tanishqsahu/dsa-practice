
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            return new TreeNode(val);

        }
        if(root->val<val){
            root->right=insertIntoBST(root->right,val);



        }
        else{
            root->left=insertIntoBST(root->left,val);
        }


        return root;



        
    }
};

#Approach2

class Solution{
public:
       TreeNode* insertIntoBST(TreeNode*root,int val){
        if(root==NULL){
            return new TreeNode(val);
        }
        TreeNode*curr =root;
        while(true){
            if(val<curr->val){
                if(curr->left==NULL){
                    curr->left=new TreeNode(val);
                    break;
                }
                curr=curr->left;
            }
            if(val>curr->val){
                if(curr->right==NULL){
                    curr->right=new TreeNode(val);
                    break;
                }
                curr=curr->right;
            }

        }


        return root;
       }

};