#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Test(int arr[], int len, int* num1, int* num2);
int main()
{
	int arr[] = { 5,4,6,4,5,7,6,8};
	int len = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	Test(arr, len, &num1, &num2);
	printf("%d %d", num1, num2);
	return 0;
}
void Test(int arr[] ,int len, int *num1, int *num2)
{
	int i = 0;
	int xor= 0;//这个是亦或的一个缩写
	int a;     //记录第一个不同的位置
	//先算出这个数组中只出现一次的两个数的亦或值
	//亦或运算满足交换律,相同亦或为0,及a^a=0 
	for (i = 0; i < len; i++)
	{
		xor ^= arr[i];
	}
	//printf("%d", xor);
	a = xor &(-xor);
	for (i = 0; i < len; i++)
	{
		if (a&arr[i])
		{
			*(num1) ^= arr[i];
		}
		else
		{
			*(num2) ^= arr[i];
		}
	}
}