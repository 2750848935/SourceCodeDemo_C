#pragma once

#include <stdio.h>
#include <stdlib.h>

//数组的初始容量
#define INIT_CAPACITY 10

int* array = NULL;	//数组指针
int size = 0;		//数组中实际的元素个数
int capacity = 0;	//当前数组的容量大小

/** 初始化数组（分配空间及初始化长度变量） */
void array_init()
{
	array = malloc(sizeof(int) * INIT_CAPACITY);
	capacity = INIT_CAPACITY;
	size = 0;
}

void array_resize()
{
	//1. 将数组信息保存到临时空间中
	int* temp = malloc(sizeof(int) * size);
	memcpy(temp, array, sizeof(int) * size);
	//2. 默认扩容1.5倍
	capacity = (capacity * 1.5) + 1;
	//3. 先释放原空间
	free(array);	
	//4. 执行扩容操作
	array = malloc(sizeof(int) * capacity);
	//5. 将临时空间中的内容复制回来
	memcpy(array, temp, sizeof(int) * size);
	//6. 释放临时空间
	free(temp);
}

/** 向数组中添加元素 */
void array_add(int element)
{
	if (capacity == 0 || array == NULL) {
		array_init();		//容量如果为0，就重新初始化
	}
	if (size == capacity) {
		//需要扩容
		array_resize();
	}

	array[size] = element;	//向指定位置赋值元素
	size++;					//总大小+1
}

/** 释放空间 */
void array_release()
{
	free(array);
	array = NULL;
	size = 0;
	capacity = 0;
}