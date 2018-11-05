#include<stdio.h>
#include<stdlib.h>
#define n 10
int main() {
	int a[n] = { 19,3,15,7,11,9,16,5,17,1 };
	int i, j;
	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	for (i = 0; i < n; i++) {
		printf("%7d%13d        ", i, a[i]);
		for (j = 1; j <= a[i]; j++) {
			printf("%c", '*');
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
