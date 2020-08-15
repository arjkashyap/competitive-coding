class Solution {
public:
    
    ListNode* reverse(ListNode* root)
    {
        if(root == nullptr)
            return root;
        ListNode* prev = nullptr;
        ListNode* curr = root;
        ListNode* next = root;
        while(next)
        {
            next = next -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) 
    {
        if(head == nullptr || head -> next == nullptr) 
            return true;
        if (head -> next -> next == nullptr)
            return head -> val == head -> next -> val;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != nullptr && fast -> next != nullptr){
            fast = fast -> next -> next;
            slow = slow -> next;            
        }
        cout << "slow val " << slow -> val << endl;
        slow = reverse(slow);
        cout << "slow val " << slow -> val << endl;

        fast = head;
        while(slow != nullptr){
            if(fast -> val != slow -> val)
                return false;
            fast = fast -> next;
            slow = slow -> next;
        }
        return true;
    }
};