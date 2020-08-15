class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        if(head == nullptr || head -> next == nullptr)
            return false;
        if(head == head -> next -> next){            
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast -> next && slow){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(fast == slow)
                return true;
            
        }
        return false;
    }
};