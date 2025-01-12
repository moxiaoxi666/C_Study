#include "SList.h"
SListNode* BuyListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("开辟节点失败\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	//需要知道返回的地址,来维护,这点容易忽略
	return newNode;
}

//遍历链表
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	if(cur==NULL)
	{
		printf("当前链表为空\n");
	}                
	else
	{

		//尾指针的位置要注意
		while (cur != NULL)
		{
			printf("%d->", cur->data);
			cur= cur->next;

		}
	}
	printf("NULL");
	printf("\n");
}
//尾增
void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuyListNode(x);
	//空指针解引用******
	//tail->NULL
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* tail = *pphead;
		//找尾
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}

}
void SListPopBack(SListNode** pphead)
{
	//1.空
	//2.一个
	//3.一个以上
	if (*pphead == NULL)
	{
		printf("该链表为空,无法删除\n");
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
		//注意野指针
	{
		SListNode* tail = *pphead;
		SListNode* prev = NULL;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}
//头插
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuyListNode(x);
	newNode->next = *pphead;
	newNode->data = x;
	//头指针的改变
	*pphead = newNode;
	
}
void SListPopFront(SListNode** pphead)
{
	//1.空
	//2.一个节点和一个以上的节点
	if (*pphead == NULL)
	{
		printf("该链表为空,无法进行头删\n");
		return;
	}
	else
	{
		SListNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next; 

	}
}

SListNode* SListFind(SListNode* phead, SListDataType x)
{
	SListNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void SListInserFront(SListNode* pos, SListDataType x)
{
	assert(pos);
	//存在严格的先后顺序
	SListNode* newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}










