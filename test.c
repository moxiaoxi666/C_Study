#include "SeqList.h"
//≤‚ ‘Õ∑Œ≤µƒ≤Â»Î…æ≥˝
void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	//SeqListPushBack(&s, 5);
	//SeqListPushBack(&s, 6);
	//SeqListPushBack(&s, 7);
	//SeqListPopBack(&s);
	//SeqListPushFront(&s, 9);
	//SeqListPopFront(&s);
	SeqListInsert(&s, 0, 9);
	SeqListErase(&s, 0);
	SeqListPrint(&s);

    SeqListDestory(&s);
}
int main()

{
	TestSeqList1();

	return 0;
}
