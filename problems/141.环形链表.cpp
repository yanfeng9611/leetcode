/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *slow,*fast;
    if(head == NULL || head->next == NULL) return false;
    slow = head;
    fast = head->next;
    while(true)
    {
        if(fast == NULL || fast->next == NULL)  return false;
        if(slow == fast) return true;
        slow = slow->next;
        fast = fast->next->next;
    }
}
