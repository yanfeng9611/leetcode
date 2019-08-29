/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(n == 1 && head->next == NULL)  // 只有一个节点，直接返回NULL 
    {
        return NULL;
    }
    struct ListNode* p1;
    struct ListNode* p2;
    p1 = head;
    p2 = head;
    for(int i = 0;i < n;i++)
    {
        p2 = p2->next;
    }
    if(p2 == NULL)  // 快指针到到链尾，则删除的是头结点 
    {
        head = head->next;
        free(p1);
        return head;
    }
    while(p2->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    p1->next = p1->next->next;  // 慢指针的下一节点为要删除的节点 
    return head;
}


