class Solution {
public:
    void swapNodes(TreeNode* root)
    {
        if(root == nullptr)
            return;
        TreeNode* tmp = root -> left;
        root -> left = root -> right;
        root -> right = tmp;
        swapNodes(root -> left);
        swapNodes(root -> right);
    }
    
    bool compareTree(TreeNode* left, TreeNode* right)
    {
        if(left == nullptr && right == nullptr)
            return true;
        if(left == nullptr && right != nullptr)
            return false;
        if(left != nullptr && right == nullptr)
            return false;
        
        return (left -> val == right -> val) && compareTree(left -> left, right -> left) && compareTree(left -> right, right -> right);
    }
    
    bool isSymmetric(TreeNode* root) 
    {
        if(root == nullptr || ((root -> left == nullptr) && root -> right == nullptr))
            return true;
        TreeNode* left = root -> left;
        TreeNode* right = root -> right;
        
        swapNodes(left);
        return compareTree(left, right);
    }
};

    