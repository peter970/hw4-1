#include<stdio.h>
#include<stdlib.h>

void sa(void);
void aa(void);
int main(void) {
	printf("first call to each function: \n");
	sa();
	aa();
	printf("\n\nsecond call to each function:\n");
	sa();
	aa();
	printf("\n");
	system("pause");
	return 0;
}
void sa(void) {
	static int array1[3];
	int i;
	printf("\nValues on entering staticarrayinit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d  ", i, array1[i]);
	printf("\nValues on exiting staticarrayinit:\n");
	for (i = 0; i <= 2; i++) {
		printf("array1[%d]=%d", i, array1[i] += 5);
	}
}
void aa(void) {
	int array2[3] = {1,2,3};
	int i;
	printf("\nValues on entering automicarrayinit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ", i, array2[i]);
	printf("\nValues on exiting automicarrayinit:\n");
	for (i = 0; i <= 2; i++) {
		printf("array2[%d] = %d", i, array2[i] += 5);
	}
}