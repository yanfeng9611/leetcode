/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 // 反转链表 
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p = NULL;
    struct ListNode *q = NULL;
    while(head != NULL)
    {
        p = head->next;
        head->next = q;
        q = head;
        head = p;
    }
    return q;
}

bool isPalindrome(struct ListNode* head){
    if(head ==NULL || head->next == NULL) return true;
    struct ListNode *slow,*mid,*fast;
    fast = mid = slow = head;
    // 寻找链表中间节点 
    while(fast != NULL && fast->next != NULL)
    {
        mid = mid->next;
        fast = fast->next->next;
    } 
    // 对于基数个节点的链表，需要将中间节点向后移位 
    if(fast != NULL) mid = mid->next;
    fast = mid;
    fast = reverseList(fast);  // 翻转链表 
    while(fast != NULL)
    {
        if(slow->val != fast->val) 
        {
            reverseList(mid);  //验证失败，恢复翻转的链表，退出循环 
            return false;
        }
        slow = slow->next;
        fast = fast->next;
    }
    reverseList(mid);
    return true;
}


