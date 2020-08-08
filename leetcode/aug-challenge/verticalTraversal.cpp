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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        int dist = 0;       // X position
        
        queue<pair<int, struct TreeNode*>> q; 
        q.push({dist, root});
        
        map<int, vector<int>> mp;
        
        while(q.empty() == false){
            int currDist = q.front().first;          // x distance
            
            struct TreeNode* currNode = q.front().second;       // node 
            pair<int, struct TreeNode*> nextDN;          // Next distance node pair
            q.pop();
            
            // Adding Distance Node pair to queue
            if( currNode -> left ){
                nextDN.first = currDist - 1;
                nextDN.second = currNode -> left;
                q.push(nextDN);
            }
            if( currNode -> right ){
                nextDN.first = currDist + 1;
                nextDN.second = currNode -> right;
                q.push(nextDN);
            }
            
            if( mp.find(currDist) != mp.end()){
                mp[currDist].push_back(currNode -> val);
            }
            else if( mp.find(currDist) == mp.end() ){
                vector<int> newVect;
                newVect.push_back(currNode -> val);
                mp[currDist] = newVect;
            }
        }
        vector<vector<int>> res;
        
        for(auto x : mp){
            vector<int> group;
            for(auto y : x.second) group.push_back(y);
            res.push_back(group);
        }
        
        return res;
    }
};
















