#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = i; j < a; j++) {
			printf("*");
		}
		printf("\n");
	}
}