#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int a, i, j, k, l; // l은 라인 특징
	scanf("%d", &a);
	for (i = 1; i <= a * 2 - 1; i++) {
		if (i < a) l = i % a;
		else if (i == a) l = a;
		else l = a - i % a;
		for (j = 0; j < a - l; j++) {
			printf(" ");
		}
		//printf("%d", j);
		for (k = 0; k < 2*l-1; k++) {
			printf("*");
		}
		//printf(" %d", (k-1)/2);
		printf("\n");
	}

}