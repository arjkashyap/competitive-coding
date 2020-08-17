class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    { 
        vector<vector<int>> res;
        if(root == nullptr)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        
        while(q.empty() == false)
        {
            TreeNode* curr = q.front();
            vector<int> v;
            while(curr != nullptr)
            {
                v.push_back(curr -> val);
                q.pop();
                if(curr -> left) q.push(curr -> left);
                if(curr -> right) q.push(curr -> right);
                curr = q.front();
            }
            res.push_back(v);
            v.clear();
            if(q.front() == nullptr){
                q.pop();
                if(q.empty() == false && q.front() != nullptr)
                    q.push(nullptr);
                else
                    break;
            }
        }
        
        return res;
    }
};