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
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (fast && fast->next) {
            slow = slow->next;          // Move by 1
            fast = fast->next->next;    // Move by 2
            
            // If they meet, there is a cycle
            if (slow == fast) {
                return true;
            }
        }
        
        return false;
        
    }
};