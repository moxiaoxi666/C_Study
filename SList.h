#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//�����ѧϰ
//������ʵ�������˳����ȱ����������,����ľ���˳����ȱ��

typedef int SListDataType;
//���
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