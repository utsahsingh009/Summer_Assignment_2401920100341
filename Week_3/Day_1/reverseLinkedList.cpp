//Brute Force
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        vector<int> store;
        ListNode* temp=head;
        while(temp!=NULL){
            int data=temp->val;
            store.push_back(data);
            temp=temp->next;
        }
        ListNode* temp1=head;
        int n=store.size()-1;
        while(n>=0){
            temp1->val=store[n];
            temp1=temp1->next;
            n--;
        }
        return head;
    }
};
//TC=O(N)
//SC=O(N)
//Optimal approach
/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* forward=nullptr;
        while(curr!=nullptr){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
};
//TC=O(N)
//SC=O(1)