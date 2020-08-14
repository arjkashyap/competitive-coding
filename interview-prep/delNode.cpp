/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // [4,5,1,9]
    void deleteNode(ListNode* node) 
    {
        ListNode* tail = nullptr;
        
        while(node -> next -> next != nullptr){
            node -> val = node -> next -> val;
            node = node -> next;
        }
        node -> val = node -> next -> val;
        node -> next = nullptr;
    }
};