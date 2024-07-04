#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	/*int a = 10;
	cout << &a;
	int* ptr = &a;*/

	//const int SIZE = 10;
	//int mas[SIZE];
	//int* ptr = mas;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	*ptr = rand() % 10;
	//	ptr++;
	//}
	//ptr -= SIZE;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << *ptr << endl;
	//	ptr++;
	//}
	//ptr -= SIZE;


	const int SIZE = 10;
	int mas1[SIZE], mas2[SIZE];
	int* ptr = mas1;
	int* ptr2 = mas2;
	for (int i = 0; i < SIZE; i++)
	{
		*ptr = rand() % 20;
		ptr++;
	}
	ptr--;
	for (int i = 0; i < SIZE; i++)
	{
		*ptr2 = *ptr;
		ptr--;
		ptr2++;
	}
	ptr++;
	ptr2 -= SIZE;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *ptr << "\t";
		ptr++;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *ptr2 << "\t";
		ptr2++;
	}
	cout << endl;
	ptr -= SIZE;
	ptr2 -= SIZE;

	/*const int SIZE = 10;
	int mas[SIZE];
	int* ptr = mas;
	int* min = mas;
	int* max = mas;
	for (int i = 0; i < SIZE; i++)
	{
		*ptr = rand() % 20;
		ptr++;
	}
	ptr -= SIZE;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *ptr << "\t";
		ptr++;
	}
	ptr -= SIZE;
	for (int i = 1; i < SIZE; i++)
	{
		if (*(ptr+i) < *min)
		{
			*min = *(ptr + i);
		}
		if (*(ptr+i) > *max)
		{
			*max = *(ptr + i);
		}
	}
	cout << endl;
	cout << *min << "\t" << *max << "\t" << endl;*/







}