#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#pragma once
//顺序表,有效数组中必须是连续的
//静态数据表(固定大小)
//动态数据表(大小可变)
typedef int SLDataType ;
#define N 10
typedef struct SeqList
{
	SLDataType *a;
	int size;//有效数据个数
	int capacity;//容量
}SL,SeqList;
//定义数据
void SeqListInit(SL*ps);
//删除数据
void SeqListDestory(SL* ps);
//打印数据
void SeqListPrint(SL* ps);
//判断是否增容
void SeqListCheckCapacity(SL* ps);
//尾插 尾删 头插 头删
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
// 任意位置的插入
void SeqListInsert(SL* ps, int pos, SLDataType x);
//任意位置的删除
void SeqListErase(SL* ps, int pos);


