#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = NULL;
	for (p = arr; p < (arr + 10); p++) {
		printf("%d", *p);
	}
	system("pause");
	return 0;
}