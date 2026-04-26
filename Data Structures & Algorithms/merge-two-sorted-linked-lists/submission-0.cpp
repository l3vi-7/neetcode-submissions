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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = nullptr, *temp = nullptr;

        if (!list1)
            return list2;
        if (!list2)
            return list1;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1 -> val <= list2 -> val) {
                if (head == nullptr) {
                    head = list1;
                    temp = head;
                } else {
                    temp -> next = list1;
                    temp = temp ->next;
                }
                    list1 = list1 -> next;
            } else {
                if (head == nullptr) {
                    head = list2;
                    temp = head;
                } else {
                    temp -> next = list2;
                    temp = temp ->next;
                }
                    list2 = list2 -> next;
            }
        }

        if (list1 != nullptr) 
            temp -> next = list1;
        if (list2 != nullptr)
            temp -> next = list2;
        
        return head;
    }
};
