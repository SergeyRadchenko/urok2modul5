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
		cout << "�������� �������:";
		cin >> o;
		switch (o)
		{
		case 1:
		{
			/*1.������ ������������ ��� �������� �������� ����� �������� �������.
				� ������� ������� ��������� ����� ��������� ������ ������ ����������, 
				�������� � ��������� �� 50 �� 100 ������������*/
			int a[20];
			for (int i = 0; i < 20; i++)
			{
				a[i] = 50 + rand() % 50;
				cout << i << "���-���:" << a[i] << endl;
		   }


		}
		break;
		case 2:
		{
			/*2.��������� ������ �� ������ ��������� ����� �������,
				����� �������� ��������� ��� ��������� ������� ����� ������� ������������ :
			a.��������� ������������������;
			b.������������ ������������������*/

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
			/*3.������ ������������� ������, ��������� �� 10 ���������.
				�������� ������� ������������ � ������ ��������.*/
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
//a[10] = min;                           ///////////������� ���.
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
			/*4.����� ������, ��������� �� 15 ��������� ������������� ����.
				���������� ���������� ���������, �������� ������� ������ ������� ��������.*/
			int a[15],schet=0;
			for (int i = 0; i < 15; i++)
			{
				a[i] = 10 + rand() % 30;
				if (a[1] < a[i])
				{
					schet++;
				}

				
			}
			cout << schet << "- �������� ��������� ��������� ������ ������� ��������." << endl;
			
			

		}
		break;
		case 5:
		{
			/*������ ������������� ������, ��������� �� 15 ���������.
				���������� ����� � �������� ������������� � ������������  ���������*/
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
		default:cout << "�� ����� �������� ��������." << endl;
			break;
		}
		cout << "������ ��������� (1)�� (2)���." << endl;
		cin >> p;
	} while (p==1);
}