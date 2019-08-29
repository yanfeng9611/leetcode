/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 // ��ת���� 
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
    // Ѱ�������м�ڵ� 
    while(fast != NULL && fast->next != NULL)
    {
        mid = mid->next;
        fast = fast->next->next;
    } 
    // ���ڻ������ڵ��������Ҫ���м�ڵ������λ 
    if(fast != NULL) mid = mid->next;
    fast = mid;
    fast = reverseList(fast);  // ��ת���� 
    while(fast != NULL)
    {
        if(slow->val != fast->val) 
        {
            reverseList(mid);  //��֤ʧ�ܣ��ָ���ת�������˳�ѭ�� 
            return false;
        }
        slow = slow->next;
        fast = fast->next;
    }
    reverseList(mid);
    return true;
}


