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
		printf("Указатели\n");
		printf("Меню: \n1 - Редактирование и вывод\n2 - Динамическое создание и удаление \n3 - Произвольная длина массива\n4 - Треугольная матрица\n5 - Указатель на функцию\n");
		int num;
		scanf_s("%d", &num);
		switch (num) 
		{
			case 1:
				printf("Вы выбрали <Редактирование и вывод>\n");
				redact();
				break;
			case 2:
				printf("Вы выбрали <Динамическое создание и удаление>\n");
				dinammass();
				break;
			case 3:
				printf("Вы выбрали <Произвольная длина массива>\n");
				proizvdlin();
				break;
			case 4:
				printf("Вы выбрали <Треугольная матрица>\n");
				triangmatrix();
				break;
			case 5:
				printf("Вы выбрали <Указатель на функцию>\n");
				int(*f)(int, int);
				f = mult;
				printf("%d", f(5,10));
				printf("%d", argf(kv, 4));
				break;
			default:
				printf("Такой команды нет");
				break;
		}
		printf("Вы хотите продолжить?\n 1-да\n0-нет\n");
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
		printf("Хотите редактировать число?\n1-да\n0-нет\n");
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
	printf("Хотите очистить массив?\n1-да\n0-нет\n");
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
	printf("Сгенерированный массив:\n");
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100; // диапазон случайных чисед от 0 до 100
		printf("%d ", mas[i]);
	}
	putchar('\n');
	free(mas);
}


triangmatrix() 
{
	printf("Введите размерность массива: ");
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