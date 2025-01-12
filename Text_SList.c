#include "SList.h"
//Ç°ËÄ¸ö
void TestSList1()
{
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPrint(pList);
	SListPopBack(&pList);
	SListPrint(pList);
	SListPopBack(&pList);
	SListPrint(pList);
	SListPopBack(&pList);
	SListPrint(pList);
	SListPushFront(&pList, 5);
	SListPushFront(&pList, 4);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPrint(pList);
}
void TestSList2()
{
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPrint(pList);
	SListNode* pos = SListFind(pList, 3);
	if (pos)
	{
		pos->data = 30;
	}
	SListPrint(pList);
}


int main()
{
	
	//TestSList1();
	TestSList2();


	return 0;
}