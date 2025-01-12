#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//链表的学习
//链表其实就是针对顺序表的缺点来创作的,补足的就是顺序表的缺点

typedef int SListDataType;
//结点
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;
void SListPushBack(SListNode** pphead, SListDataType x);
void SListPopBack(SListNode** pphead);
void SListPrint(SListNode* phead);



void SListPushFront(SListNode** pphead, SListDataType x);
void SListPopFront(SListNode** pphead);
SListNode* SListFind(SListNode* phead, SListDataType x);
void SListInserFront(SListNode* pos, SListDataType x);