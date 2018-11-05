#include<stdio.h>
#include<stdlib.h>
#define a 10
int main() {
	int n[a];
	int j;
	for (j = 0; j < a; j++) {
		n[j] = 2 + 2 * j;
	}
	printf("%s%13s\n", "Element", "Value");

	for (j = 0; j < a; j++) {
		printf("%7d%13d\n", j, n[j]);
	}
	system("pause");
	return 0;
}