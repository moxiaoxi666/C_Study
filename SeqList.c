#include "SeqList.h"
void SeqListPrint(SL* ps)
{
	int i = 0;
	assert(ps);
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListInit(SL* ps)
{
	ps->a = (SLDataType*)malloc(4 * sizeof(SLDataType));
	if (ps->a == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	ps->capacity = 4;
	ps->size = 0;
}
//β�� βɾ ͷ�� ͷɾ
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL* ps)
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	//ѭ��д�Ķ��ǽ��е�����
	//�Լ��������ֹͣ������,Ҫע��ת��
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int end = ps->size - 1;
	int i = 0;
	while (i<=end-1)
	{
		ps->a[i] = ps->a[i + 1];
		i++;
	}
	ps->size--;
}
//����λ�õĲ���
//posΪ�±�λ��
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos < ps->size&&pos>=0);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end>=pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}
//ɾ������
void SeqListErase(SL* ps, int pos)
{
	assert(pos < ps->size&& pos >= 0);
	assert(ps);
	int end = ps->size - 1;
	int start = pos;
	while (start<=ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}
void SeqListCheckCapacity(SL* ps)
{
	assert(ps);
	SLDataType* b;
	//������˾�Ҫ����
	if (ps->size == ps->capacity)
	{
		ps->capacity *= 2;
		b= (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		{
			if (b == NULL)
			{
				printf("����ʧ��\n");
				exit(-1);
			}
			else
			{
				ps->a = b;
			}
		}
	}
}
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a= NULL;
	ps->capacity = 0;
	ps->size = 0;
}
