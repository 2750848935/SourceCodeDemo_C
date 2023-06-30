#pragma once

#include <stdio.h>
#include <stdlib.h>

//����ĳ�ʼ����
#define INIT_CAPACITY 10

int* array = NULL;	//����ָ��
int size = 0;		//������ʵ�ʵ�Ԫ�ظ���
int capacity = 0;	//��ǰ�����������С

/** ��ʼ�����飨����ռ估��ʼ�����ȱ����� */
void array_init()
{
	array = malloc(sizeof(int) * INIT_CAPACITY);
	capacity = INIT_CAPACITY;
	size = 0;
}

void array_resize()
{
	//1. ��������Ϣ���浽��ʱ�ռ���
	int* temp = malloc(sizeof(int) * size);
	memcpy(temp, array, sizeof(int) * size);
	//2. Ĭ������1.5��
	capacity = (capacity * 1.5) + 1;
	//3. ���ͷ�ԭ�ռ�
	free(array);	
	//4. ִ�����ݲ���
	array = malloc(sizeof(int) * capacity);
	//5. ����ʱ�ռ��е����ݸ��ƻ���
	memcpy(array, temp, sizeof(int) * size);
	//6. �ͷ���ʱ�ռ�
	free(temp);
}

/** �����������Ԫ�� */
void array_add(int element)
{
	if (capacity == 0 || array == NULL) {
		array_init();		//�������Ϊ0�������³�ʼ��
	}
	if (size == capacity) {
		//��Ҫ����
		array_resize();
	}

	array[size] = element;	//��ָ��λ�ø�ֵԪ��
	size++;					//�ܴ�С+1
}

/** �ͷſռ� */
void array_release()
{
	free(array);
	array = NULL;
	size = 0;
	capacity = 0;
}