#include "SList.h"
SListNode* BuyListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("���ٽڵ�ʧ��\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	//��Ҫ֪�����صĵ�ַ,��ά��,������׺���
	return newNode;
}

//��������
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	if(cur==NULL)
	{
		printf("��ǰ����Ϊ��\n");
	}                
	else
	{

		//βָ���λ��Ҫע��
		while (cur != NULL)
		{
			printf("%d->", cur->data);
			cur= cur->next;

		}
	}
	printf("NULL");
	printf("\n");
}
//β��
void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuyListNode(x);
	//��ָ�������******
	//tail->NULL
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* tail = *pphead;
		//��β
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}

}
void SListPopBack(SListNode** pphead)
{
	//1.��
	//2.һ��
	//3.һ������
	if (*pphead == NULL)
	{
		printf("������Ϊ��,�޷�ɾ��\n");
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
		//ע��Ұָ��
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
//ͷ��
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuyListNode(x);
	newNode->next = *pphead;
	newNode->data = x;
	//ͷָ��ĸı�
	*pphead = newNode;
	
}
void SListPopFront(SListNode** pphead)
{
	//1.��
	//2.һ���ڵ��һ�����ϵĽڵ�
	if (*pphead == NULL)
	{
		printf("������Ϊ��,�޷�����ͷɾ\n");
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
	//�����ϸ���Ⱥ�˳��
	SListNode* newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}










