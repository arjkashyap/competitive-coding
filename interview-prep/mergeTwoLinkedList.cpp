
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* root = ( l1 -> val <= l2 -> val ) ? l1 : l2;
        while(p1 && p2){
            // Two nodes are equal       
            if(p1 -> val == p2 -> val){
                while(p1 -> next != nullptr && p1 -> val == p1 -> next -> val)
                    p1 = p1 -> next;
                ListNode* tmp = p1;
                p1 = p1 -> next;
                tmp -> next = p2;
              
            }
           else if(p1 -> val < p2 -> val){
                while(p1 -> next != nullptr && p1 -> next -> val <= p2 -> val)
                    p1 = p1 -> next;
                ListNode* tmp = p1;
                p1 = p1 -> next;
                tmp -> next = p2;
            }
           else if(p1 -> val > p2 -> val){
                while(p2 -> next != nullptr && p2 -> next -> val <= p1 -> val)
                    p2 = p2 -> next;
                               
                ListNode* tmp = p2;
                p2 = p2 -> next;
                tmp -> next = p1;
            }
            
        }
        
        return root;
    }
};
