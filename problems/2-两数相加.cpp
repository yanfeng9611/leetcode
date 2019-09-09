struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int c=0;
    struct ListNode *head,*cur,*next;
    head=(struct ListNode *)malloc(sizeof(struct ListNode));
    head->next=NULL;
    cur=head;
    while(l1!=NULL||l2!=NULL||c)
    {
        next=(struct ListNode *)malloc(sizeof(struct ListNode));
        next->next=NULL;
        cur->next=next;
        cur=next;
        l1!=NULL?(c+=l1->val,l1=l1->next):(c+=0);
        l2!=NULL?(c+=l2->val,l2=l2->next):(c+=0);
        cur->val=c%10;
        c=c/10;
    }
    return head->next;
}



struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *head;
    // p->next = NULL;
    head = l1;
    int tag= 0;
    int temp = 0;
    while(1)
    {   
        temp = l1->val + l2->val;
        l1->val = (temp + tag)%10;
        tag = (temp + tag)/10;
        if(l1->next == NULL || l2->next == NULL) break;
        l1 = l1->next;
        l2 = l2->next;
    }
    if(l1->next == NULL)
    {
        if(l2->next != NULL)
        {
            l1->next = l2->next;
            l1 = l1->next;
            l1->val = l1->val + tag;
            while(l1->val >= 10)
            {
                if(l1->next != NULL)
                {
                    l1->val = l1->val%10;
                    l1 = l1->next;
                    l1->val = l1->val + tag;
                }
                else
                {
                    l1->val = l1->val%10;
                    struct ListNode *p;
                    p = (struct ListNode*)malloc(sizeof(struct ListNode));
                    l1->next = p;
                    l1->next->val = 1;
                    l1->next->next = NULL;          
                }
            }
        }
        else if(tag == 1)
        {
            l1->val = l1->val%10;
            struct ListNode *p;
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            l1->next = p;
            l1->next->val = 1;
            l1->next->next = NULL;
        }
        return head;
    }
    if(tag == 1)
    {
        l1 = l1->next;
        l1->val = l1->val + tag;
        while(l1->val >= 10)
        {
            if(l1->next != NULL)
            {
                l1->val = l1->val%10;
                l1 = l1->next;
                l1->val = l1->val + tag;
            }
            else
            {
                l1->val = l1->val%10;
                struct ListNode *p;
                p = (struct ListNode*)malloc(sizeof(struct ListNode));
                l1->next = p;
                l1->next->val = 1;
                l1->next->next = NULL;          
            }
        }
    }
    return head;
}


