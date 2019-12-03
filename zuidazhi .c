#include <stdio.h>
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int i;
	int t=0;
	for(i = 0; i < 10; i++ ) {
		if (t< a[i]) {
		t = a[i]; 
	}
	}
	printf("%d\n", t);
	system("pause");
	return 0;
}
