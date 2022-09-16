#include <stdio.h>
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












