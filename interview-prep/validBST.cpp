class Solution {
public:
    
    bool checkBST(TreeNode* root, long min_lt, long max_lt)
    {
        if(root == nullptr)
            return true;
        bool flag = ( root -> val > min_lt && root -> val < max_lt);
        cout << min_lt << " " << root -> val << " " << max_lt << endl;
        return  checkBST(root -> left, min_lt, root -> val) && 
                checkBST(root -> right, root -> val, max_lt) &&
                flag;
    }
    
    bool isValidBST(TreeNode* root)  
    {
        if(root == nullptr || (root -> left == nullptr && root -> right == nullptr) )
            return true;
        return checkBST(root, LONG_MIN, LONG_MAX);
    }
};