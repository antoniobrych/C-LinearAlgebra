#include <stdio.h>
#include <stdlib.h>
int scalarProduct(int* vector1, int* vector2, int size);
int main(void) {
	int vector1[2] = {1,2};

	int vector2[2] = {-2,1};
	//scalarProduct with 2 vectors of size 2
	printf("%d", scalarProduct(vector1, vector2, 2));
	return 0;
}


int scalarProduct(int* vector1, int* vector2,int size) {
	int res = 0;
	for (int i = 0;i < size;i++) {
		res += vector1[i] * vector2[i];
	}
	return res;
}












void test(void) {
	int arr1[3][3];
	int** arr2 = (int**)malloc(sizeof(int*) * 3);
	for (int i = 0;i <= 3;i++) {
		arr2[i] = (int*)malloc(sizeof(int) * 3);
	}
}