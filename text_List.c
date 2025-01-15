#include "List.h"
ListNode* BuyListNode(LTDateaType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		printf("生成节点失败\n");
		exit(-1);
	}
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->data = x;
	return newNode;
}
void ListPushBack(ListNode* phead, LTDateaType x)
{
	assert(phead);
	ListNode* tail = phead->prev;
	ListNode* newNode = BuyListNode(x);
	tail->next = newNode;
	newNode->prev = tail;
	newNode->next = phead;
	phead->prev = newNode;
}
void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur!=phead)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
ListNode* ListInit()
{
	ListNode* newNode = BuyListNode(0);
	newNode->next = newNode;
	newNode->prev = newNode;
	return newNode;

}
void ListDestroy(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* temp = cur;
		cur = cur->next;
		free(temp);
	}
	free(phead);
}
void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	ListNode* tailPrev = tail->prev;
	tailPrev->next = phead;
	phead->prev = tailPrev;
	free(tail);
	tail = NULL;
}
void ListPushFront(ListNode* phead, LTDateaType x)
{
	ListNode* newNode = BuyListNode(x);
	ListNode* frist = phead->next;
	phead->next = newNode;
	newNode->prev = phead;
	newNode->next = frist;
	frist->prev = newNode;
}