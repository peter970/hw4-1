#include<stdio.h>
#include<stdlib.h>
#define n 12
int main() {
	int a[n] = { 1,3,5,4,7,2,99,16,45,67,89,45 };
	int i;
	int total = 0;
	for (i = 0; i < n; i++) {
		total += a[i];
	}
	printf("total of array element values is %d \n", total);

	system("pause");
	return 0;
}
