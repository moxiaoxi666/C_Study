#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
typedef int LTDateaType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDateaType data;

}ListNode;
ListNode* ListInit();
ListNode* BuyListNode(LTDateaType x);
void ListPushBack(ListNode* phead, LTDateaType x);
void ListPrint(ListNode* phead);
void ListDestroy(ListNode* phead);
void ListPopBack(ListNode* phead);
void ListPushFront(ListNode* phead, LTDateaType x);;
void ListPopFront(ListNode* phead);
