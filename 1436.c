
#pragma warning(disable:4996)


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int is_666(int i) {
	int flag = 0;
	while (i != 0) {
		if (i % 10 == 6) {
			flag++;
		}
		else {
			flag = 0;
		}
		i /= 10;
		if (flag >= 3) return 1;
	}
	return 0;
}
int main() {
	int n, count = 0, i;
	scanf("%d", &n);
	for (i = 0; count < n; i++) {
		if (is_666(i)) count++;
	}
	printf("%d\n", i-1);
}