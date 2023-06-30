// C语言知识点强化示例.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//忽略编译器的安全警告
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "数组扩容示例.h"
#include "二维数组和双重指针示例.h"
#include "ArrayList.h"

int main()
{
    int test[] = { 11, 22, 33, 44 };
    ArrayList arrayList;
    arraylist_init(&arrayList);
    for (int i = 0; i < 4; i++) {
        arraylist_push(&arrayList, test[i]);
    }
    for (size_t i = 0; i < 4; i++)
    {
        printf("%d\n", arraylist_at(&arrayList, i));
    }
    arraylist_release(&arrayList);

    //一维数组示例();
    //二维数组示例();
    //打印游戏地图();
    //读取用户的键盘输入
    //int input = 0;
    //打印游戏地图();
    //while ((input = GetKey()) != '\n') {
    //    if (input == 0) continue;
    //    //system("cls");  //清屏
    //    Clear(0, 0);
    //    if (input == 38) {  //上键，修改行
    //        if (x != 0) {
    //            x--;
    //        }
    //    }
    //    if (input == 39) {  //右
    //        if (y != 7) {
    //            y++;
    //        }
    //    }
    //    if (input == 40) {  //下
    //        if (x != 7) {
    //            x++;
    //        }
    //    }
    //    if (input == 37) {  //左
    //        if (y != 0) {
    //            y--;
    //        }
    //    }
    //    打印游戏地图();
    //}
    /*array_init();
    for (int i = 0; i < 11; i++) {
        array_add(i + 1);
    }
    printf("当前数组元素个数：%d\n", size);
    printf("当前数组容量大小：%d\n", capacity);
    for (int i = 0; i < size; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
    array_release();*/

    // ctrl + shift + /   注释快捷键
    //int nums1[5] = {11, 22, 33, 44, 55};
    //int nums2[5];
    ////数组复制
    //memcpy(nums2, nums1, sizeof(nums1));
    //for (size_t i = 0; i < sizeof(nums1) / sizeof(nums1[0]); i++)
    //{
    //    printf("%d\n", *(nums2 + i));
    //}

    //sizeof -> 特殊的运算符，不支持任何运算
    //int num = 1024;
    //int size = sizeof(num++);
    //printf("%d\n", num);    //打印？

  //  double scores[] = { 66, 88, 99, 55, 33 };
  //  double* ptr_scores1 = scores;
  //  double* ptr_scores2 = &scores[0];
  //  printf("%d\n", ptr_scores1 == ptr_scores2);
  //  printf("sizeof(scores) = %d\n", sizeof(scores));
  //  printf("sizeof(ptr_scores1) = %d\n", sizeof(ptr_scores1));

  //  //使用malloc()、calloc()、relloc()、free()动态分配及释放内存
  //   //int nums[5];  -> 空间无法手动释放
  //  const int length = 5;
  ///*  int* nums = malloc(sizeof(int) * length);
  //  memset(nums, 0, sizeof(int) * length);*/
  //  int* nums = calloc(length, sizeof(int));

  //  nums[1] = 1024;
  //  //重新分配内存
  //  nums = realloc(nums, sizeof(int) * (length + 5));

  //  for (size_t i = 0; i < length; i++)
  //  {
  //      printf("%d\n", nums[i]);
  //  }

  //  free(nums);         //手动释放空间
  //  nums = NULL;


    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
