#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));


	int o, p;
	do
	{
		cout << "Выберите задание:";
		cin >> o;
		switch (o)
		{
		case 1:
		{
			/*1.Массив предназначен для хранения значений весов двадцати человек.
				С помощью датчика случайных чисел заполнить массив целыми значениями, 
				лежащими в диапазоне от 50 до 100 включительно*/
			int a[20];
			for (int i = 0; i < 20; i++)
			{
				a[i] = 50 + rand() % 50;
				cout << i << "Чел-Вес:" << a[i] << endl;
		   }


		}
		break;
		case 2:
		{
			/*2.Заполнить массив из восьми элементов таким образом,
				чтобы значения элементов при просмотре массива слева направо образовывали :
			a.убывающую последовательность;
			b.возрастающую последовательность*/

			int a[8];
			for (int i = 0; i < 8; i++)
			{
				a[i] = 5 + rand() % 40;
			}
			for (int i = 0; i < 8; i++)
			{

				for (int j = 8;j > i; j--)
				{
					if (a[j - 1] < a[j])
					{
						int temp = a[j - 1];
						a[j - 1] = a[j];
						a[j] = temp;
					}
					

				}
				cout  << a[i]<<"_" ;
				
			
			}
			for (int i = 0; i < 8; i++)
			{

				for (int j = 8; j > i; j--)
				{
					if (a[j - 1] > a[j])
					{
						int temp = a[j - 1];
						a[j - 1] = a[j];
						a[j] = temp;
					}


				}
				cout << a[i] << "_";

				
			}
		}
		break;
		case 3:
		{
			/*3.Ввести целочисленный массив, состоящий из 10 элементов.
				Поменять местами максимальный и первый элементы.*/
			int a[10],min,max;
			for (int i = 0; i < 10; i++)
			{
				a[i] = 5 + rand() % 30;

			}
			for (int i = 0; i < 10; i++)
			{

				for (int j = 10; j > i; j--)
				{
					if (a[j - 1] > a[j])
					{
						int temp = a[j - 1];
						a[j - 1] = a[j];
						a[j] = temp;
//
//a[10] = min;                           ///////////Непомню как.
//					a[1] = max;
					}
					

				}
				cout << a[i] << "_";

				cout << endl;
			}
                    
					
		}
		break;
		case 4:
		{
			/*4.Задан массив, состоящий из 15 элементов вещественного типа.
				Определить количество элементов, значения которых больше первого элемента.*/
			int a[15],schet=0;
			for (int i = 0; i < 15; i++)
			{
				a[i] = 10 + rand() % 30;
				if (a[1] < a[i])
				{
					schet++;
				}

				
			}
			cout << schet << "- Значения остальных элементов больше первого элемента." << endl;
			
			

		}
		break;
		case 5:
		{
			/*Ввести целочисленный массив, состоящий из 15 элементов.
				Определить сумму и разность максимального и минимального  элементов*/
			int a[10], min, max;
			for (int i = 0; i < 10; i++)
			{
				a[i] = 5 + rand() % 30;

			}
			for (int i = 0; i < 10; i++)
			{

				for (int j = 10; j > i; j--)
				{
					if (a[j - 1] > a[j])
					{
						int temp = a[j - 1];
						a[j - 1] = a[j];
						a[j] = temp;
						
						 
											
					}


				}
				cout << a[i] << "_";

				cout << endl;
			}
			cout << a[0] + a[10] << endl;
			cout << a[0] - a[10] << endl;

		}
		break;
		default:cout << "Вы ввели неверное значение." << endl;
			break;
		}
		cout << "Хотите повторить (1)ДА (2)НЕТ." << endl;
		cin >> p;
	} while (p==1);
}