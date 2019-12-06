#define  _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(int);
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", *(arr + i));
	system("pause");
	return 0;
}