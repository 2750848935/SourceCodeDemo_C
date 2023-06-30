#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

//1. 创建数据结构
#define INIT_CAPACITY 10

typedef struct {
	int size;			//当前结构中的元素个数
	int capacity;		//当前结构中数组的容量大小
	void** elements;	//元素数组
}ArrayList;

//2. 书写操作函数

/** 创建一个线性表对象 */
ArrayList* arraylist_create();

/** 初始化一个线性表 */
void arraylist_init(ArrayList* arrayList);

/** 扩容 */
void arraylist_resize(ArrayList* arrayList);

/** 向顺序表中添加元素 */
void arraylist_push(ArrayList* arrayList, void* element);

/** 返回指定下标处的元素 */
void* arraylist_at(ArrayList* arrayList, int index);

/** 课后作业：向指定下标的位置插入一个元素 */
void arraylist_insert(ArrayList* arrayList, void* element, int index);

/** 释放内存 */
void arraylist_release(ArrayList* arrayList);