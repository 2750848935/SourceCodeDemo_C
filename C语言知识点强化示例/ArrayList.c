#include "ArrayList.h"

ArrayList* arraylist_create()
{
    //1. 创建对象并分配空间
    ArrayList* arrayList = malloc(sizeof(ArrayList));
    arrayList->size = 0;
    arrayList->capacity = INIT_CAPACITY;
    arrayList->elements = malloc(sizeof(void*) * INIT_CAPACITY);
    return arrayList;
}

void arraylist_init(ArrayList* arrayList)
{
    arrayList->size = 0;
    arrayList->capacity = INIT_CAPACITY;
    arrayList->elements = malloc(sizeof(void*) * INIT_CAPACITY);
}

void arraylist_resize(ArrayList* arrayList)
{
    void** temp = arrayList->elements;
    int new_capacity = (int)(arrayList->capacity * 1.5 + 1);
    arrayList->elements = malloc(sizeof(void*) * new_capacity);
    memcpy(arrayList->elements, temp, sizeof(void*) * arrayList->capacity);
    //更新容量
    arrayList->capacity = new_capacity;
}

void arraylist_release(ArrayList* arrayList)
{
    free(arrayList->elements);
    arrayList->elements = NULL;
    arrayList->size = 0;
    //free(arrayList);
    
}

void arraylist_push(ArrayList* arrayList, void* element)
{
    if (arrayList->size == arrayList->capacity) {
        arraylist_resize(arrayList);
    }
    arrayList->elements[arrayList->size++] = element;
}

void* arraylist_at(ArrayList* arrayList, int index)
{
    if (index < 0 || index >= arrayList->size) {
        return NULL;
    }
    return arrayList->elements[index];
}