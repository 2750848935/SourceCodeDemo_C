#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

//1. �������ݽṹ
#define INIT_CAPACITY 10

typedef struct {
	int size;			//��ǰ�ṹ�е�Ԫ�ظ���
	int capacity;		//��ǰ�ṹ�������������С
	void** elements;	//Ԫ������
}ArrayList;

//2. ��д��������

/** ����һ�����Ա���� */
ArrayList* arraylist_create();

/** ��ʼ��һ�����Ա� */
void arraylist_init(ArrayList* arrayList);

/** ���� */
void arraylist_resize(ArrayList* arrayList);

/** ��˳��������Ԫ�� */
void arraylist_push(ArrayList* arrayList, void* element);

/** ����ָ���±괦��Ԫ�� */
void* arraylist_at(ArrayList* arrayList, int index);

/** �κ���ҵ����ָ���±��λ�ò���һ��Ԫ�� */
void arraylist_insert(ArrayList* arrayList, void* element, int index);

/** �ͷ��ڴ� */
void arraylist_release(ArrayList* arrayList);