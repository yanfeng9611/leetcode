/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// µÝ¹é
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    if(l1->val < l2->val)
    {
        l1->next = mergeTwoLists(l1->next,l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoLists(l1,l2->next);
        return l2;
    }
}
// ±éÀú 
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *p,*head;
    if(l1 == NULL)
    {
        return l2;
    }
    else if(l2 == NULL)
    {
        return l1;
    }
    if(l1->val < l2->val)
    {
        p = l1;
        head = p;
        l1 = l1->next;
    }
    else
    {
        p = l2;
        head = p;
        l2 = l2->next;
    }
    while(l1 != NULL && l2 != NULL)
    {
        if(l1->val < l2->val)
        {
            p->next = l1;
            l1 = l1->next;
        }
        else
        {
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
        
    }
    if(l1 == NULL)
    {
        p->next = l2;
    }
    else if(l2 == NULL)
    {
        p->next = l1;
    }
    return head;
}

 


