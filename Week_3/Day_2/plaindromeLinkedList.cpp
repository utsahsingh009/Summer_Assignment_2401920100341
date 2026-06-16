/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow = rev(slow);
        while(slow!=nullptr){
            if(head->val != slow->val) return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }

    ListNode*rev(ListNode*head){
        ListNode*prev=nullptr;
        while(head!=nullptr){
            ListNode* temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        return prev;
    }
};
//TC=O(N)
//SC=O(1)