#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
	int data;
	struct ListNode* next;
};
//初始化并给链表赋值 
initList(struct ListNode *list)
{
	int i = 0,len = 0;
	ListNode *p,*head;
	head = list;
	printf("请输入你要创建的链表长度：\n");
	scanf("%d",&len);
	for(i = 0;i < len;i++)
	{
		p = (ListNode *)malloc(sizeof(ListNode));
		printf("第%d个数：",i+1);
		scanf("%d",&p->data);
		p->next = NULL;
		list->next = p;
		list = list->next;
	}
	list = head;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* p;
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    else
    {
        p = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
    }
    return p;
}

int main()
{
	struct ListNode *list,*head;
	list = (ListNode *)malloc(sizeof(ListNode));
	list->next = NULL;
	head = list;
	initList(list);
	list = reverseList(list->next);
	while(list != NULL)
	{
		printf("%d",list->data);
		list = list->next;
	}
	return 0;
}
