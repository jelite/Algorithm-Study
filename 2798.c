#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
int * get_arr(int n) {
	int* arr;
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	return arr;
}
int main()
{
	int n, * arr=NULL, target;
	int dif;

	scanf("%d%d", &n, &target);
	dif = target;

	arr = get_arr(n);

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; i++) {
			for (int k = i + 2; k < n; k++) {
				if (dif > arr[i] + arr[j] + arr[k] - target) dif = arr[i] + arr[j] + arr[k] - target;
			}
		}
	}
	printf("%d", target + dif);
}