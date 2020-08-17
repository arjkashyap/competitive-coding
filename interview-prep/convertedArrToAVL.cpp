class Solution {
public:
    int getHeight(struct TreeNode* root)
    {
        if(root == nullptr)
            return -1;

        return max(getHeight(root -> left), getHeight(root -> right)) + 1;
    }

    int getBalanceFactor(struct TreeNode* root)
    {
        if(root == nullptr)
            return -1;
        return getHeight(root -> left) - getHeight(root -> right);
    }

    struct TreeNode* rightRotate(struct TreeNode* x)
    {
        struct TreeNode* y = x -> left;
        struct TreeNode* t = y -> right;
        y -> right = x;
        x -> left = t;

        return y;
    }

    struct TreeNode* leftRotate(struct TreeNode* y)
    {
        struct TreeNode* x = y -> right;
        struct TreeNode* t = x -> left;
        x -> left = y;
        y -> right = t;

        return x;
    }

    TreeNode* insert(TreeNode* root,int val)
    {
        if(root == nullptr)
            return new TreeNode(val);
        else if( val < root -> val)
            root -> left = insert(root -> left, val);
        else if(val > root -> val)
            root -> right = insert(root -> right, val);
        else
            return root;

        // balance factor
        int bf = getBalanceFactor(root);

        // Rotation
        if(bf > 1 && val < root -> left -> val)
        {
            // left left case
            return rightRotate(root);
        }
        if(bf < -1 && val > root -> right -> val)
        {
            // right right case
            return leftRotate(root);

        }
        if(bf > 1 && val > root -> left -> val)
        {
            // left right case
            root -> left = leftRotate(root -> left);
            return rightRotate(root);
        }
        if(bf < -1 && val < root -> right -> val)
        {
            // right left case
            root -> right = rightRotate(root -> right);
            return leftRotate(root);
        }

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        TreeNode* head = nullptr;
        for(auto x : nums)
            head = insert(head, x);
        return head;
    }
};