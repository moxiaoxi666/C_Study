#include "List.h"
void TextList1()
{
	ListNode* phead = NULL;
	phead = ListInit(0);
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	ListPushBack(phead, 5);
	ListPrint(phead);
	ListDestroy(phead);

}
int main()
{
	TextList1();
	return 0;
}