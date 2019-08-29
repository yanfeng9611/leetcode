/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(n == 1 && head->next == NULL)  // ֻ��һ���ڵ㣬ֱ�ӷ���NULL 
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
    if(p2 == NULL)  // ��ָ�뵽����β����ɾ������ͷ��� 
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
    p1->next = p1->next->next;  // ��ָ�����һ�ڵ�ΪҪɾ���Ľڵ� 
    return head;
}


