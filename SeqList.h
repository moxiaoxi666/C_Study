#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#pragma once
//˳���,��Ч�����б�����������
//��̬���ݱ�(�̶���С)
//��̬���ݱ�(��С�ɱ�)
typedef int SLDataType ;
#define N 10
typedef struct SeqList
{
	SLDataType *a;
	int size;//��Ч���ݸ���
	int capacity;//����
}SL,SeqList;
//��������
void SeqListInit(SL*ps);
//ɾ������
void SeqListDestory(SL* ps);
//��ӡ����
void SeqListPrint(SL* ps);
//�ж��Ƿ�����
void SeqListCheckCapacity(SL* ps);
//β�� βɾ ͷ�� ͷɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
// ����λ�õĲ���
void SeqListInsert(SL* ps, int pos, SLDataType x);
//����λ�õ�ɾ��
void SeqListErase(SL* ps, int pos);


