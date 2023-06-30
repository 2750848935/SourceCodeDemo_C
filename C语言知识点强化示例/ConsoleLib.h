#pragma once
#ifndef GAMELIB_H_INCLUDED
#define GAMELIB_H_INCLUDED

/***************************************************
 * �ļ�����GameLib.h
 * ��  ����������Ϸ�г��õĿ���̨����
 **************************************************/
#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <time.h>
#include <stdio.h>
 //#include <unistd.h>
#include <string.h>

 /* ���ÿ���̨���ڱ��� */
void SetTitle(char* title);
/* 0-��ɫ, 1-��ɫ,   2-��ɫ,      3-ǳ��ɫ,     4-��ɫ,   5-��ɫ,   6-��ɫ,   7-��ɫ,
 * 8-��ɫ, 9-����ɫ, 10-����ɫ,   11-��ǳ��ɫ   12-����ɫ 13-����ɫ 14-����ɫ 15-����ɫ
 */
void SetColor(int, int);

void SetConsoleWindowSize(int width, int height);
/* ���ù���x��y����-���������� */
void SetPosition(int x, int y);
/* ����fgets, ��ȡ��Ӧ���ȵ��ַ���*/
void Read(char* Str, int BufferSize);
/* �õ��û�����ļ� */
int GetKey();
/* �õ���ǰ����Ϸʱ�䣬����������ʱ���� */
char* GetGameTime();
void Clear(int X, int Y);
/* �����Ϣ��ʾ�� */
void ClearMessage();
#endif // GAMELIB_H_INCLUDED
