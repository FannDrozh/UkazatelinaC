#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>
#include <conio.h>
#include "Ukazatel.h"
#define _CRT_SECURE_NO_WARNINGS
#define N 10

main() 
{
	int exit = 1;
	while (exit == 1) {
		setlocale(LC_ALL, "Rus");
		printf("���������\n");
		printf("����: \n1 - �������������� � �����\n2 - ������������ �������� � �������� \n3 - ������������ ����� �������\n4 - ����������� �������\n5 - ��������� �� �������\n");
		int num;
		scanf_s("%d", &num);
		switch (num) 
		{
			case 1:
				printf("�� ������� <�������������� � �����>\n");
				redact();
				break;
			case 2:
				printf("�� ������� <������������ �������� � ��������>\n");
				dinammass();
				break;
			case 3:
				printf("�� ������� <������������ ����� �������>\n");
				proizvdlin();
				break;
			case 4:
				printf("�� ������� <����������� �������>\n");
				triangmatrix();
				break;
			case 5:
				printf("�� ������� <��������� �� �������>\n");
				int(*f)(int, int);
				f = mult;
				printf("%d", f(5,10));
				printf("%d", argf(kv, 4));
				break;
			default:
				printf("����� ������� ���");
				break;
		}
		printf("�� ������ ����������?\n 1-��\n0-���\n");
		scanf_s("%d", &exit);
		putchar('\n');
	}

	return 0;
}

redact() 
{
	int pere = 1;
	while (pere == 1)
	{
		int i;
		int* p = &i;
		scanf_s("%d", p);
		printf("%p\n", p);
		printf("������ ������������� �����?\n1-��\n0-���\n");
		scanf_s("%d", &pere);
	}
}

dinammass() 
{
	int n;
	scanf_s("%d", &n);
	int* a = malloc(n * sizeof(int));
	int* p = a;
	for (long i = 0; i < n; i++)
	{	
		a[i];
		printf("%d ", i);
	}
	free(a);
	printf("������ �������� ������?\n1-��\n0-���\n");
	int num;
	scanf_s("%d", &num);
	if (num == 1) 
	{
		int * str = malloc(n);
	}
}

proizvdlin() 
{ 
	int n = rand() % 100;
	srand(time(0));
	int* mas = malloc(n * sizeof(int));
	int* mas1 = mas;
	printf("��������������� ������:\n");
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100; // �������� ��������� ����� �� 0 �� 100
		printf("%d ", mas[i]);
	}
	putchar('\n');
	free(mas);
}


triangmatrix() 
{
	printf("������� ����������� �������: ");
	int n;
	scanf_s("%d", &n);
	int** arr = malloc(n * sizeof(int));
	int** arr1 = arr;
	int* a;
	int k = -1;
	int* k1 = k;
	for (int i = 0; i < n; i++)
	{
		*arr = malloc((i + 1) * sizeof(int));
		a = *arr;
		
		for (int j = 0; j <= i; j++) 
		{
			k ++;
			**arr = k;
			(*arr)++;
		}
		*arr = a;
		arr++;
	}
	arr = arr1;
	for (int i = 0; i < n; i++)
	{
		a = *arr;
		for (int j = 0; j <= i; j++)
		{
			printf(" %d ", **arr);
			(*arr)++;
		}
		*arr = a;
		arr++;
		printf("\n");
	}
	arr = arr1;

	for (int i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	free(arr);
}

int mult(int a, int b) 
{
	return a*b;
}

int kv(int x) 
{
	return x * x;
}

int argf(int (*f)(int), int i) 
{
	return f(i);
}